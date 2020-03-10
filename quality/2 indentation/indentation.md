# Indentation

Indent your code using four spaces at a time to make clear which blocks of code are
inside of others. Here's some nicely indented code:

    // print arguments
    printf("\n");
    
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
    
        printf("\n");
    }
