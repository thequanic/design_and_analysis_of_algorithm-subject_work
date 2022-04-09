/*
Given an unsorted array of integers, design an algorithm and a program to sort the array using
insertion sort. Your program should be able to find number of comparisons and shifts ( shifts -
total number of times the array elements are shifted from their place) required for sorting the array.
Input Format:
The first line contains number of test cases, T.
For each test case, there will be two input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Output Format:
The output will have T number of lines.
For each test case T, there will be three output lines.
First line will give the sorted array.
Second line will give total number of comparisons.
Third line will give total number of shift operations required 
*/

//insertion sort
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t; //test cases
    scanf("%d",&t);
    while(t>0)
    {
        //printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
        int n;
        //printf("Enter size of array::");
        scanf("%d",&n);

        int arr[n];
        //printf("Enter elements of array::");

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
            shift++;
            while(key<arr[j] && j>=0)
            {
                arr[j+1]=arr[j];
                shift++;
                comp++;
                j--;
            }
        
            arr[j+1]=key;
        }

        //printf("Sorted array is::\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }

        printf("\ncomparisions= %d \nshifts= %d\n",comp,shift);

        t--;
    }
    
    return 0;
}