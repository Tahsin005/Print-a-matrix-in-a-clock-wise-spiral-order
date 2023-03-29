#include<stdio.h>
/*Given an n X m matrix 'a', print all elements of the matrix 
in spiral order*/
//LEETCODE
int main(){
    int m;
    printf("Enter no of rows of matrix: ");
    scanf("%d", &m);
    int n;
    printf("Enter no of columns of matrix: ");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix: ");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    //Spiral print
    printf("\n");
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int total_element=m*n;
    int count=0;
    while(count<total_element){
        //print the minimum row
        for(int j=minc;j<=maxc && count<total_element;j++){
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        //print the maximum column
        for(int i=minr;i<=maxr && count<total_element;i++){
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        //print the maximum row
        for(int j=maxc;j>=minc && count<total_element;j--){
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        //print the minimum column
        for(int i=maxr;i>=minr && count<total_element;i--){
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}