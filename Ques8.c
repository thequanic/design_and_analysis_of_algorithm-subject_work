/*
Given an unsorted array of integers, design an algorithm and implement a program to sort this
array using selection sort. Your program should also find number of comparisons and number of
swaps required.
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
Third line will give total number of swaps required.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t; //test cases
    scanf("%d",&t);
    while(t>0)
    {
       // printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
        int n;
       // printf("Enter size of array::");
        scanf("%d",&n);

        int arr[n];
        //printf("Enter elements of array::");

        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }


        int swap=0,comp=0;

        for(i=1;i<n;i++)
        {
            int min_index=i-1;
            for(j=i;j<n;j++)
            {
                comp++;
                if(arr[j]<arr[min_index])
                {
                    min_index=j;
                
                }
            }

            int temp=arr[i-1];
            arr[i-1]=arr[min_index];
            arr[min_index]=temp;
            swap++;
        }

    // printf("Sorted array is::\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }

        printf("\ncomparisions= %d\nswaps=%d\n",comp,swap);

        t--;
    }
    
    return 0;
}