/*
Given an array of integers . design an algo and implement it using a program to find no. of
pairs of integers such that difference is equal to given key . i.e. arr[i] – arr[j] = key
*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
    int n;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array:");

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    int key;
    printf("Enter key:");
    scanf("%d",&key);

    int count=0;

    printf("\n\nAll possible pairs of i,j and k are:\n\n");

    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
           if(arr[i]-arr[j]==key)
           {
               count++;
           } 
        }
    }

    printf("Number of such pairs in given array: %d\n\n",count);

    return 0;

}
