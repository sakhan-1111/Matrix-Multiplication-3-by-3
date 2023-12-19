#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,a[3][3],b[3][3],mul[3][3],r=0;

    printf("Enter the elements of 1st matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of 2nd matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            r=0;
           for(k=0; k<3; k++)
           {
              r=r+a[i][k]*b[k][j];
           }
           mul[i][j]=r;
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;

}
