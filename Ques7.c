/*
Given an unsorted array ,design an algorithm and implement it using a
program
to sort it using insertion sort and also find number of comparisons used and
swaps 
*/

//insertion sort
#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
    int n;
    printf("Enter size of array::");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array::");

    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    int shift=0,comp=0;

    for(i=1;i<n;i++)
    {
        j=i-1;
        int key=arr[i];
        comp++;
        while(key<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            
            shift++;
            j--;
        }
      
        arr[j+1]=key;
    }

    printf("Sorted array is::\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nNumber of comparisions: %d, Number of shifts: %d\n",comp,shift);

    return 0;
}