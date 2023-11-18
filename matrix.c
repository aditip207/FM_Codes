#include<stdio.h>
int main()
{
    int mat[2][2], i, j, sum,prim,second;
    sum = 0;
    printf("Enter all elements of 2*2Matrix: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &mat[i][j]);
            
        }
    }
            for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("The elements:%d",mat[i][j]);
            sum = sum + mat[i][j];
            if(i==j)
            prim= prim+mat[i][j];
            if((i+j)==2)
            second=second+mat[i][j];
        
        }
        printf("\n");
    }
           
    
    printf("\nSum of all elements = %d", sum);
    printf("\nSum of primary diagonal = %d",prim);
    printf("\nSum of secondary diagonal = %d", second);
    return 0;

}