#include<stdio.h>
int main()
{
    int mat31[10][10], mat32[10][10], mult[10][10],add[10][10];
    int i, j, k;
    printf("\n Enter the First Matrix elements : \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            scanf("%d", &mat31[i][j]);
        }
    }
    printf("\n Enter the Second Matrix elements : \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            scanf("%d", &mat32[i][j]);
        }
    }
    printf("\n The First Matrix :  \n\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("\t %d ", mat31[i][j]);
        }
        printf("\n");
    }
    printf("\n The Second Matrix :  \n\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("\t %d ", mat32[i][j]);
        }
        printf("\n");
    }
    // . . . The two matrices have been summation here . . .
    printf("sum of matrices are: \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            add[i][j]=mat31[i][j]+mat32[i][j];

                 printf("\t %d",add[i][j]);
           }
           printf("\n");
    }
    // . . . The two matrices have been multipled here . . .

           for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= 3; j++)
            {
                mult[i][j] = 0;
                for (k = 1; k <= 3; k++)
                {
                    mult[i][j] = mult[i][j]+ mat31[i][k] * mat32[k][j];
                }
            }
        }

        // . . . Product of the given two Matrices is displayed in Matrix form . . .

        printf("\n\n Multiplication of matrices are: \n\n");
        for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= 3; j++)
            {
                printf("\t%d", mult[i][j]);
            }
            printf("\n");
        }
        return (0);
    }
