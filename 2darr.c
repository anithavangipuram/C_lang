#include<stdio.h>
//void print_array(int row,int col,int (*p)[col]);
void print_array(int row,int col,int p[row][col]);
int main()
{
    int row,col;
    printf("Enter the row size: ");
    scanf("%d",&row);
    printf("Enter the column size: ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    print_array(row,col,arr);
}
//void print_array(int row,int col,int (*p)[col])
void print_array(int row,int col,int arr[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
}
