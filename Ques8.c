/*
given an unsorted array ,design an algorithm and implement it using
a program
to sort it using selection sort and also find number of comparisons used and
swaps 
*/

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


    int swap=0,comp=0;

    for(i=0;i<n;i++)
    {
       int min_index=i;
       for(j=i;j<n;j++)
       {
           comp++;
           if(arr[j]<arr[min_index])
           {
               min_index=j;
        
           }
       }

       int temp=arr[i];
       arr[i]=arr[min_index];
       arr[min_index]=temp;
       swap++;
    }

    printf("Sorted array is::\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nNumber of comparisions: %d, Number of swaps: %d\n",comp,swap);

    return 0;
}