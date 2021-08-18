# include <stdio.h>

void printArray(int *A,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf(" \n ");
}

void SelectionSort(int *A, int n)
{  
    int MinIndex , temp;
    int j;
    for(int i=0; i<=n-1;i++)
    {   
        MinIndex =  i;
        for(j=i+1; j<n;j++)
        {
            if(A[j]<A[MinIndex])
            {
                MinIndex=j;
            }
        }
        temp = A[i];
        A[i] = A[MinIndex];
        A[MinIndex] = temp;
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