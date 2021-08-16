# include <stdio.h>

void printArray(int *A,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf(" \n ");
}

void InsertionSort(int A[], int n)
{
    int i;
    int key;
    for(i =1;i<n-1;i++)
    {
        int key = A[i];
        int j = i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }    
        A[j+1] = key;
    }
}


int main()
{
    int A[]= {12,34,4,54,43};
    int n = 5;
    printArray(A,n);
    SelectionSort(A,n);
    printArray(A,n);
}