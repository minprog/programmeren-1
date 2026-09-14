/*
 * Biggest Square: find the biggest square on a map
 *
 * Usage: ./biggest_square <kaart>
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The largest map that is supported
#define MAX_LINES 100
#define MAX_WIDTH 100

int read_map(string filename, string lines[], int max_lines);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./biggest_square <kaart>\n");
        return 1;
    }

    string lines[MAX_LINES];
    int count = read_map(argv[1], lines, MAX_LINES);

    // TODO
}

/*
 * Reads the file called filename, line by line, into the array lines.
 *
 * - Each line is a string, without the newline at the end.
 * - At most max_lines lines are stored in lines.
 * - Returns the number of lines in the file. This can be more than
 *   max_lines, but then only the first max_lines lines are stored!
 * - Returns -1 if the file cannot be opened.
 *
 * You do not need to understand how this function works, only how to use it.
 */
int read_map(string filename, string lines[], int max_lines)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return -1;
    }

    int count = 0;
    int c = fgetc(file);
    while (c != EOF)
    {
        // read one line of any length into a growing buffer
        int length = 0;
        int capacity = 16;
        char *line = malloc(capacity);
        while (c != EOF && c != '\n')
        {
            if (length + 1 == capacity)
            {
                capacity *= 2;
                line = realloc(line, capacity);
            }
            line[length] = c;
            length++;
            c = fgetc(file);
        }
        line[length] = '\0';

        if (count < max_lines)
        {
            lines[count] = line;
        }
        else
        {
            free(line);
        }
        count++;

        // skip the newline
        if (c == '\n')
        {
            c = fgetc(file);
        }
    }

    fclose(file);
    return count;
}
