/*
Given an unsorted array of integers, design an algorithm and implement it using a program to sort
an array of elements by partitioning the array into two subarrays based on a pivot element such
that one of the sub array holds values smaller than the pivot element while another subarray
holds values greater than the pivot element. Pivot element should be selected randomly from the
array. Your program should also find number of comparisons and swaps required for sorting the
array.
*/

#include <stdio.h>
#include <stdlib.h>


int swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low, int high, int * comp, int*swaps)
{
    int pivot = arr[high];
    int i=low-1;

    int j;
    for(j=low;j<=high-1;j++)
    {
        (*comp)++;
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
            (*swaps)++;
     
        }
    }

    swap(&arr[high],&arr[i+1]);
     (*swaps)++;
    return i+1;

}

void quick_sort(int arr[], int low, int high,int *comp, int *swaps)
{
    if(low<high)
    {

        int pi = partition(arr,low,high,comp,swaps);

        quick_sort(arr,low,pi-1,comp,swaps);
        quick_sort(arr,pi+1,high,comp,swaps);
    }
}

int main()
{
    int t;
    printf("Enter number of test cases:");                  //test cases
    scanf("%d",&t);

    while(t>0)
    {
        int n;
        printf("Enter size of array:");
        scanf("%d",&n);

        int i;
        int arr[n];

        printf("Enter elements of array:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        int comp=0,swaps=0;
        quick_sort(arr,0,n-1,&comp,&swaps);


        printf("\nSorted array:");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }


        printf("\n\nNumber of compare: %d Number of swaps: %d\n\n",comp,swaps);


        t--;
    }

    return 0;
}