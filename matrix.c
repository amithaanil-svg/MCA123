#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int r1, c1, r2, c2;
    int i, j, k, choice;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    do
    {
        printf("\n----- MATRIX OPERATIONS -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose of A\n");
        printf("5. Transpose of B\n");
        printf("6. Display A\n");
        printf("7. Display B\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                /* Addition */
                if(r1 == r2 && c1 == c2)
                {
                    printf("\nAddition:\n");

                    for(i = 0; i < r1; i++)
                    {
                        for(j = 0; j < c1; j++)
                        {
                            c[i][j] = a[i][j] + b[i][j];
                            printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Addition not possible!\n");
                }
                break;

            case 2:
                /* Subtraction */
                if(r1 == r2 && c1 == c2)
                {
                    printf("\nSubtraction:\n");

                    for(i = 0; i < r1; i++)
                    {
                        for(j = 0; j < c1; j++)
                        {
                            c[i][j] = a[i][j] - b[i][j];
                            printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Subtraction not possible!\n");
                }
                break;

            case 3:
                /* Multiplication */
                if(c1 == r2)
                {
                    printf("\nMultiplication:\n");

                    for(i = 0; i < r1; i++)
                    {
                        for(j = 0; j < c2; j++)
                        {
                            c[i][j] = 0;

                            for(k = 0; k < c1; k++)
                            {
                                c[i][j] = c[i][j] +
                                          a[i][k] * b[k][j];
                            }

                            printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Multiplication not possible!\n");
                }
                break;

            case 4:
                /* Transpose of A */
                printf("\nTranspose of Matrix A:\n");

                for(i = 0; i < c1; i++)
                {
                    for(j = 0; j < r1; j++)
                    {
                        printf("%d\t", a[j][i]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                /* Transpose of B */
                printf("\nTranspose of Matrix B:\n");

                for(i = 0; i < c2; i++)
                {
                    for(j = 0; j < r2; j++)
                    {
                        printf("%d\t", b[j][i]);
                    }
                    printf("\n");
                }
                break;

            case 6:
                /* Display A */
                printf("\nMatrix A:\n");

                for(i = 0; i < r1; i++)
                {
                    for(j = 0; j < c1; j++)
                    {
                        printf("%d\t", a[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 7:
                /* Display B */
                printf("\nMatrix B:\n");

                for(i = 0; i < r2; i++)
                {
                    for(j = 0; j < c2; j++)
                    {
                        printf("%d\t", b[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 8:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 8);

    return 0;
}

