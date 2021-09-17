/* Name: SWAPNIL BISWAS
PRN : 20070122148
*/
//FDS ASSIGNMENT 2
#include <stdio.h>
int multiplication();
int greatest_num();
int addition_of_mde();
int sparse_matrix();
int addition();
int difference();
int main()
{
    int choice;
    printf("Enter your choice:-\n1.Multiplication\n2.Find Greatest Number from Each Row\n3.Addition of Major Diagonal Elements\n4.Sparse matrix representation for given matrix\n5.Addition of matrix\n6.Subtraction of matrix\n.");
    scanf("%d",&choice);
    switch(choice)
    {
case 1 :
    {
        multiplication();
    }
case 2:
    {
        greatest_num();
    }
case 3:
    {
        addition_of_mde();
    }
case 4:
    {
        sparse_matrix();
    }
    case 5:
    {
        addition();
    }
    case 6:
    {
        difference();
    }
    }

}

int multiplication()
{
    int mat1[3][3],mat2[3][3],ans[3][3];
    printf("Enter the elements for the first matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("\nEnter the elements for the second matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
            scanf("%d",&mat2[i][j]);
    }
    printf("Elements of 1st matrix:\n");
        for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
            printf("%d\t",mat1[i][j]);
    }
    printf("\n Elements of 2nd matrix:\n");
    for(int i=0;i<3;i++)
    {
          for(int j =0;j<3;j++)
            printf("%d\t",mat2[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            ans[i][j]=0;
            for (int k=0;k<3;k++)                   //keeping track of both rows and coloumns of both the matrix
                ans[i][j] += mat1[i][k]*mat2[k][j];
        }
    }
    printf("\nResult matrix:\n");
        for(int i=0;i<3;i++)
    {
          for(int j =0;j<3;j++)
            printf("%d\t", ans[i][j]);
            printf("\n");
    }



}

int greatest_num()
{
    int n[3];
    int mat1[3][3];
    printf("Enter the elements for the matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Elements of the matrix:\n");
        for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
            printf("%d\t",mat1[i][j]);
    }

    for (int i=0;i<3;i++)
    {
    for (int j=0;j<3;j++)
    {
        if (mat1[i][j]>mat1[0][0])  //finding the maximum element in the row
        {
            n[i]=mat1[i][j];
        }
        else
        {
            n[i]=mat1[i][0];
        }

    }
    }
    printf("\nThe array having greatest integer in each row is:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\t",n[i]);
    }

}
int addition_of_mde()
{
    int n=0;
    int mat1[3][3];
    printf("\nEnter the elements for the matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Elements of the matrix:\n");
        for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
            {printf("%d\t",mat1[i][j]);}printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        n +=mat1[i][i];
    }
    printf("\nThe addition of all the major diagonal elements is %d",n);

}
int sparse_matrix()
{
    int n;
    printf("\nEnter the number of rows:\n");
    scanf("%d",&n);
    int total=0;  // count of zero
    int ncount;  //non zero elements
    int mat1[n][n];
    printf("Enter the elements for the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Elements of the matrix:\n");
        for(int i=0;i<n;i++)
        {

    {
        for(int j =0;j<n;j++)
            printf("%d\t",mat1[i][j]);}
            printf("\n");}

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
            {
                if (mat1[i][j]==0)
                    total ++;
            }
    }
    ncount = n*n-total;
    if( total > (n*n)/2 )
    {
    int sparse[ncount][3];
    int k=0;
    printf("\nThe number of non zero terms are: %d",ncount);
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
            {
                if (mat1[i][j]!=0)
                    {
                        sparse[k][0]=i;
                        sparse[k][1]=j;
                        sparse[k][2]=mat1[i][j];
                        k++;

                    }


            }
    }
    
printf("\nThe Sparse matrix is as follows:\n");

    for(int i =0;i<ncount;i++)
    {
        
        printf("%d\t",sparse[i][0]);
        printf("%d\t",sparse[i][1]);
        printf("%d\t",sparse[i][2]);
        printf("\n");
    }
    }
}
int addition()
{
    int mat1[10][10] , mat2[10][10] , sum[10][10];
    int rows , cols , i , j;

    printf("enter the number of rows: \n");
    scanf("%d" , &rows);

    printf("enter the number of coloumns: \n");
    scanf("%d" , &cols);
    
    printf("enter the elements of matrix1: \n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("enter the matrix elements of matrix2: \n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            scanf("%d" , &mat2[i][j]);
        }
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("sum of the matrix is: \n");

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
 int difference()
{
    int mat1[10][10] , mat2[10][10] , difference[10][10];
    int rows , cols , i , j;

    printf("enter the number of rows: \n");
    scanf("%d" , &rows);

    printf("enter the number of coloumns: \n");
    scanf("%d" , &cols);
    
    printf("enter the elements of matrix1: \n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("enter the matrix elements of matrix2: \n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            scanf("%d" , &mat2[i][j]);
        }
    }

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            difference[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("difference of the matrix is: \n");

    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            printf("%d \t", difference[i][j]);
        }
        printf("\n");
    }
    return 0;
}