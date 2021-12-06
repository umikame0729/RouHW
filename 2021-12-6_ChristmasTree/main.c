#include <stdio.h>

void printTree(int n, int beg, int end)
{
    int w = n * 2 - 1;

    for (int i = beg; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        int stars = i * 2 - 1;
        int blank = (w - stars) / 2;

        // left blank
        for (int b = 0; b < blank; b++)
        {
            printf(" ");
        }

        for (int s = 0; s < stars; s++)
        {
            switch (s % 2)
            {
            case 0:
                printf("*");
                break;
            case 1:
                printf(" ");
                break;
            }
        }

        // newline
        printf("\r\n");
    }
}

void printTreeRoot(int n, int w, int h)
{
    int width = n * 2 - 1;
    int stars = w * 2 - 1;
    int blanks = (width - stars) / 2;

    while (h--)
    {
        for (int b = 0; b < blanks; b++)
        {
            printf(" ");
        }
        for (int s = 0; s < stars; s++)
        {
            switch (s % 2)
            {
            case 0:
                printf("*");
                break;
            case 1:
                printf(" ");
                break;
            }
        }
        printf("\r\n");
    }
}

int main()
{
    int layer = 1;
    int group = (layer / 3) + 1;
    int offset = layer % 3;

    for (int g = 0; g < group; g++)
    {
        if (g == group - 1)
        {
        }
        else
        {
            printTree(layer, g * 2 + 1, g * 2 + 1 + offset * 2 - 1);
        }
    }

    // printTree(10, 1, 5);
    // printTree(10, 3, 7);
    // printTree(10, 5, 9);
    // printTreeRoot(10, 3, 3);

    return 0;
}
