/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int linearsearch(int arr[], int size , int element)
{
    int i = 0;
    for(i=0;i<size-1;i++)
    {
        if(arr[i]==element)
        {
            return i;
            
        }
       
    }
    return -1;
}

int binarysearch(int arr[], int size , int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == element)
            {
                return mid;
            }
            
        if(arr[mid]<element)
            {
                low=mid+1;
            }
        else
            {
                high=mid-1;
            }
    }return -1;        
}

void print( int arr[])
{
    int n;
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int a[100] = {12,3,43,54,465,43,2354,54};
    int element = 3;
    int n = sizeof(a)/sizeof(a[0]);
    int out = linearsearch(a,n,element );
    printf("%d",out);


    return 0;
}
