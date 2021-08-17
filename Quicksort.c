# include <stdio.h>

void printArray(int *A,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf(" \n ");
}

int Partition(int *A, int low , int high)
{
    int pivot = A[low];
    int i = low +1;
    int j = high;
    int temp;

    
    do
    {
        while(A[i] <= pivot)
        {
            i++;
        }
        while(A[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i<j);
        temp = A[low];
        A[low] = A[j];
        A[j] = temp;
        return j;
}

void QuickSort(int *A, int low, int high)
{
    int PartitionIndex;
    
    if(low<high)
    {
        PartitionIndex = Partition(A,low, high);
        QuickSort(A, low, PartitionIndex-1);
        QuickSort(A, PartitionIndex+1, high );
    }
}
int main()
{
    int A[]= {12,34,4,54,43};
    int n = 5;
    printArray(A,n);
    QuickSort(A,0,n-1);
    printArray(A,n);
}