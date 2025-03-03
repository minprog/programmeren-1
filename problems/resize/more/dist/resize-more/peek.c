#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"

#define GREEN "\033[32;2m"
#define RESET "\033[0m"

void print_bmp_headers(const char *filename, BITMAPFILEHEADER *bf, BITMAPINFOHEADER *bi) {
    printf("%-20s: %s\n", "Filename", filename);
    printf("%-20s: 0x%X\n", "File Type", bf->bfType);
    printf("%-20s: %u bytes\n", "File Size", bf->bfSize);
    printf("%-20s: %u\n", "Data Offset", bf->bfOffBits);
    printf("%-20s: %u bytes\n", "Header Size", bi->biSize);
    printf("%-20s: %d pixels\n", "Width", bi->biWidth);
    printf("%-20s: %d pixels\n", "Height", bi->biHeight);
    printf("%-20s: %u\n", "Planes", bi->biPlanes);
    printf("%-20s: %u bits\n", "Bit Count", bi->biBitCount);
    printf("%-20s: %u\n", "Compression", bi->biCompression);
    printf("%-20s: %u bytes\n", "Image Size", bi->biSizeImage);
    printf("%-20s: %d ppm\n", "X Pixels per Meter", bi->biXPelsPerMeter);
    printf("%-20s: %d ppm\n", "Y Pixels per Meter", bi->biYPelsPerMeter);
    printf("%-20s: %u\n", "Colors Used", bi->biClrUsed);
    printf("%-20s: %u\n", "Important Colors", bi->biClrImportant);
}

int read_bmp_headers(const char *filename, BITMAPFILEHEADER *bf, BITMAPINFOHEADER *bi) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    fread(bf, sizeof(BITMAPFILEHEADER), 1, file);
    fread(bi, sizeof(BITMAPINFOHEADER), 1, file);
    fclose(file);
    return 0;
}

void print_comparison(const char *property, int val1, int val2, int is_signed) {
    if (val1 == val2) {
        if (is_signed) {
            printf(GREEN "%-20s | %20d | %20d\n" RESET, property, val1, val2);
        } else {
            printf(GREEN "%-20s | %20u | %20u\n" RESET, property, (unsigned int)val1, (unsigned int)val2);
        }
    } else {
        if (is_signed) {
            printf("%-20s | %20d | %20d\n", property, val1, val2);
        } else {
            printf("%-20s | %20u | %20u\n", property, (unsigned int)val1, (unsigned int)val2);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2 || argc > 3) {
        printf("Usage: %s <bmp_file1> [bmp_file2]\n", argv[0]);
        return 1;
    }

    BITMAPFILEHEADER bf1, bf2;
    BITMAPINFOHEADER bi1, bi2;

    if (read_bmp_headers(argv[1], &bf1, &bi1)) return 1;
    if (argc == 3 && read_bmp_headers(argv[2], &bf2, &bi2)) return 1;

    if (argc == 2) {
        print_bmp_headers(argv[1], &bf1, &bi1);
    } else {
        printf("%-20s | %-20s | %-20s\n", "Property", argv[1], argv[2]);
        printf("---------------------|----------------------|----------------------\n");
        print_comparison("File Type", bf1.bfType, bf2.bfType, 0);
        print_comparison("File Size", bf1.bfSize, bf2.bfSize, 0);
        print_comparison("Data Offset", bf1.bfOffBits, bf2.bfOffBits, 0);
        print_comparison("Header Size", bi1.biSize, bi2.biSize, 0);
        print_comparison("Width", (int)bi1.biWidth, (int)bi2.biWidth, 1);
        print_comparison("Height", (int)bi1.biHeight, (int)bi2.biHeight, 1);
        print_comparison("Planes", bi1.biPlanes, bi2.biPlanes, 0);
        print_comparison("Bit Count", bi1.biBitCount, bi2.biBitCount, 0);
        print_comparison("Compression", bi1.biCompression, bi2.biCompression, 0);
        print_comparison("Image Size", bi1.biSizeImage, bi2.biSizeImage, 0);
        print_comparison("X Pixels per Meter", (int)bi1.biXPelsPerMeter, (int)bi2.biXPelsPerMeter, 1);
        print_comparison("Y Pixels per Meter", (int)bi1.biYPelsPerMeter, (int)bi2.biYPelsPerMeter, 1);
        print_comparison("Colors Used", bi1.biClrUsed, bi2.biClrUsed, 0);
        print_comparison("Important Colors", bi1.biClrImportant, bi2.biClrImportant, 0);
    }

    return 0;
}
