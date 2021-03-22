#include <stdio.h>

int main()
{
    char name[30];
    int line = 6;

    printf("Enter your name: "); //Every alphabet should be in small letter
    gets(name);

    printf("\n");
    for (int z = 0;name[z] != '\0'; z++)
    {
        //A
        if (name[z] == 'a')
        {
            for (float l = 0; l < 7; l++)
            {
                printf(" ");
            }
            printf("*\n");
            for (int i = 0; i < line; i++)
            {
                if (i != 3)
                {
                    for (int k = line; k > i; k--)
                    {
                        printf(" ");
                    }
                    printf("* ");
                    for (int s = 0; s < 2 * i; s++)
                    {
                        printf(" ");
                    }
                    printf("*");
                }

                else
                {
                    for (int m = 0; m < 3; m++)
                    {
                        printf(" ");
                    }
                    for (int n = 0; n < 5; n++)
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'b')
        {
            //B
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line / 2 || i == line)
                {
                    printf("* * * * *");
                }
                else
                {
                    printf("*        *");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'c')
        {
            //C
            for (int i = 0; i <= line; i++)
            {
                if (i == line || i == 0)
                {
                    printf("* * * * * *");
                }
                else
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'd')
        {
            //D
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line)
                {
                    printf("* * * * *");
                }
                else
                {
                    printf("*");
                    if (i == 1 || i == 5)
                    {
                        for (int k = 0; k < 9; k++)
                        {
                            printf(" ");
                        }
                    }
                    else if (i == 2 || i == 4)
                    {
                        for (int k = 0; k < 9.5; k++)
                        {
                            printf(" ");
                        }
                    }
                    else if (i == 3)
                    {
                        for (int k = 0; k < 10; k++)
                        {
                            printf(" ");
                        }
                    }

                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'e')
        {
            //E
            for (int i = 0; i <= line; i++)
            {
                if (i == line || i == (line / 2) || i == 0)
                {
                    printf("* * * * * *");
                }
                else
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (name[z] == 'f')
        {
            //F
            for (int i = 0; i <= line; i++)
            {
                if (i == (line / 2) || i == 0)
                {
                    printf("* * * * * *");
                }
                else
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'g')
        {
            //G
            for (int i = 0; i <= line; i++)
            {
                if (i == line || i == 0)
                {
                    printf("* * * * * *");
                }
                else
                {
                    printf("*");
                    if (i == 3)
                    {
                        for (int s = 0; s < 4; s++)
                        {
                            printf(" ");
                        }
                        for (int m = 0; m < 5; m++)
                        {
                            printf(" *");
                        }
                    }
                    else if (i > 3)
                    {
                        for (int s = 0; s < 9; s++)
                        {
                            printf(" ");
                        }
                        printf("*");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'h')
        {
            //H
            for (int i = 0; i <= line; i++)
            {
                if (i == line / 2)
                {
                    printf("* * * * * *");
                }
                else
                {
                    printf("*         *");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'i')
        {
            //I
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line)
                {
                    printf("* * * * * * *");
                }
                else
                {
                    for (int j = 1; j < 7; j++)
                    {
                        printf(" ");
                    }
                    printf("* ");
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (name[z] == 'j')
        {
            //J
            for (int i = 0; i <= line; i++)
            {
                if (i == 0)
                {
                    printf("* * * * * * *");
                }
                else if (i == line)
                {
                    for (int u = 0; u < 4; u++)
                    {
                        printf("* ");
                    }
                }
                else
                {
                    for (int j = 1; j < 7; j++)
                    {
                        printf(" ");
                    }
                    printf("* ");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'k')
        {
            //K
            for (int i = 0; i < 7; i++)
            {
                printf("  ");
                printf("*");

                if (i <= 3)

                {
                    printf(" ");
                    for (int j = line / 2 - i; j > 0; j--)
                    {
                        printf("  ");
                    }
                    printf("*");

                    printf("\n");
                }
                if (i > 3)
                {
                    for (int k = i - 3; k > 0; k--)
                    {
                        printf("  ");
                    }
                    printf("*");

                    printf("\n");
                }
            }
            printf("\n");
        }

        else if (name[z] == 'l')
        {
            //L
            for (int i = -1; i <= line; i++)
            {
                if (i == line)
                {
                    printf("* * * * * *");
                }
                else
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'm')
        {
            //M
            for (int i = 1; i <= line; i++)
            {
                printf("*");

                for (int j = 1; j < i; j++)
                {
                    printf(" ");
                }
                printf("* ");
                for (int k = line; k > i; k--)
                {
                    printf("  ");
                }
                printf("*");
                for (int u = 1; u < i; u++)
                {
                    printf(" ");
                }

                printf("*");
                printf("\n");
            }
            printf("*");
            printf("      *");
            printf("      *");
            printf("\n");
            printf("\n");
        }

        else if (name[z] == 'n')
        {
            // N
            printf("*        *");
            printf("\n");
            for (int i = 1; i <= line; i++)
            {
                if (i = i)
                {
                    printf("*");
                }

                for (int j = 1; j <= i; j++)
                {
                    printf(" ");
                }
                printf("* ");
                for (int k = line; k > i; k--)
                {
                    printf(" ");
                }
                printf("* ");
                printf("\n");
            }
            printf("*        *");
            printf("\n");
            printf("\n");
        }
        else if (name[z] == 'o')
        {
            //O
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line)
                {
                    printf("* * * * * *");
                }
                else
                {
                    printf("*         *");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'p')
        {
            //P
            int line = 6;
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line / 2)
                {
                    printf("* * * * *");
                }
                else if (i < line / 2)
                {
                    printf("*");
                    for (int p = 0; p < 8; p++)
                    {
                        printf(" ");
                    }
                    printf("*");
                }
                else
                {
                    printf("*");
                }

                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'q')
        {
            //Q
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line)
                {
                    printf("* * * * * *");
                }
                else if (i < line)
                {
                    printf("*");
                    if (i >= 4)
                    {
                        for (int v = 0; v < 2 * i - 3; v++)
                        {
                            printf(" ");
                        }

                        printf("*");
                        if (i == 4)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                printf(" ");
                            }
                        }
                        else if (i == 5)
                        {
                            for (int j = 0; j < 1; j++)
                            {
                                printf(" ");
                            }
                        }
                    }
                    else
                    {
                        for (int j = 0; j < 9; j++)
                        {
                            printf(" ");
                        }
                    }

                    printf("*");
                }
                printf("\n");
            }
            for (int s = 0; s < 12; s++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            printf("\n");
        }

        else if (name[z] == 'r')
        {
            //R
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line / 2)
                {
                    printf("* * * * * *");
                }
                else if (0 < i && i < line / 2)
                {
                    printf("*");
                    for (int k = 0; k < 10; k++)
                    {
                        printf(" ");
                    }
                    printf("*");
                }
                else if (line / 2 < i && i < line + 1)
                {
                    printf("*");
                    for (int k = 0; k < 10; k++)
                    {
                        printf(" ");
                    }
                    printf("*");
                }
                else
                {

                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 's')
        {
            //S
            for (int i = 0; i <= line; i++)
            {
                printf(" ");
                if (i == line || i == (line / 2) || i == 0)
                {
                    printf("* * * * * *");
                }
                else if (i <= line / 2)
                {
                    printf("*");
                }
                else
                {
                    for (int s = 0; s < 10; s++)
                    {
                        printf(" ");
                    }
                    printf("*");
                }

                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 't')
        {
            //T
            for (int i = 0; i <= line; i++)
            {
                if (i == 0)
                {
                    printf("* * * * * * *");
                }
                else
                {
                    for (int j = 1; j < 7; j++)
                    {
                        printf(" ");
                    }
                    printf("* ");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'u')
        {
            //U
            for (int i = 0; i <= line; i++)
            {
                printf(" ");
                if (i == line)
                {
                    printf(" * * * * * ");
                }
                else
                {
                    printf("*         *");
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (name[z] == 'v')
        {
            //V
            for (int i = 1; i <= line; i++)
            {
                for (int j = 1; j < i; j++)
                {
                    printf(" ");
                }
                printf("* ");
                for (int k = line; k > i; k--)
                {
                    printf("  ");
                }
                printf("* ");

                printf("\n");
            }
            printf("      *");
            printf("\n");
        }

        else if (name[z] == 'w')
        {
            //W
            printf("*");
            for (int c = 0; c < 13; c++)
                printf(" ");
            printf("*");

            for (int c = 0; c < 13; c++)
                printf(" ");
            printf("*");

            printf("\n");
            for (int i = 1; i <= line; i++)
            {
                printf(" ");
                for (int j = 1; j < i; j++)
                {
                    printf(" ");
                }
                printf("* ");
                for (int k = line; k > i; k--)
                {
                    printf("  ");
                }
                printf("* ");
                for (int s = 2; s < 2 * i; s++)
                {
                    printf(" ");
                }

                printf("* ");
                for (int m = line; m > i; m--)
                {
                    printf("  ");
                }
                printf("* ");

                printf("\n");
            }
            printf("       *");
            printf("      ");
            printf("       *");
            printf("\n");
        }
        
        else if (name[z] == 'x')
        {
            //X
            for (int i = 0; i <= 3; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    printf("  ");
                }
                printf("* ");
                for (int k = 6; k > 2 * i; k--)
                {
                    printf("  ");
                }
                printf("* ");

                printf("\n");
            }
            for (int i = 0; i <= 3; i++)
            {
                for (int j = 3; j > i; j--)
                {
                    printf("  ");
                }
                printf("* ");
                for (int k = 0; k < 2 * i; k++)
                {
                    printf("  ");
                }
                printf("* ");
                printf("\n");
            }
            printf("\n");
        }
        
        else if(name[z] == 'y')
        {
            //Y
            for (int i = 0; i <= 3; i++)
            {
                if (i < line / 2 + 2)
                {

                    for (int j = 0; j < i; j++)
                    {
                        printf("  ");
                    }
                    printf("* ");
                    for (int k = 6; k > 2 * i; k--)
                    {
                        printf("  ");
                    }
                    printf("* ");
                }
                printf("\n");
            }
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("  ");
                }
                printf(" *");
                printf("\n");
            }
            printf("\n");
        }
        
        else if(name[z] == 'z')
        {
            //Z
            for (int i = 0; i <= line; i++)
            {
                if (i == 0 || i == line)
                {
                    printf("* * * * * * * *");
                }

                else
                {
                    for (int j = 14.6; j > 2.5 * i; j--)
                    {
                        printf(" ");
                    }
                    printf("*");
                }

                printf("\n");
            }
            printf("\n");
        }
        
        else if (name[z] == ' ')
        {
            printf("\n\n\n");
        }

        else
        {
            printf("There is a number or symbol in name\nEnter a valid name");
            break;
        }
    }
    
    return 0;
}