#include <stdio.h>


void printArray(int *A,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf(" \n ");
}

void merge(int A[], int low , int mid, int high )
{
    int i,j,k,C[100]; 
    i = low;
    j = mid +1;
    k= low;
  

    while(i<=mid && j<=high )
    {
        if(A[i]<A[j])
        {
            C[k] = A[i];
            i++ ;
            k++;
        }
        else
        {
            C[k] = A[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        C[k] = A[i];
        i++; 
        k++;
    }

    while(j<=high)
    {
        C[k] = A[j];
        j++;
        k++;
    }
    for( int f=low;f<=high; f++)
    {
        A[f] = C[f];
    }

}

void MergeSort(int A[] , int low , int high)
{
    int mid;
    if(low<high)
    {
        mid = (low + high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        merge(A, low, mid, high); 
    }
}

int main()
{
    int A[] = {9,1,14,4,15,6};
    int n = 6;

    printArray(A,n);
    MergeSort(A,0,5);
    printArray(A,n);
}