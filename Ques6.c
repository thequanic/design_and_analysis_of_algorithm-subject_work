/*
Given an array of nonnegative integers, design an algorithm and a program to count the number
of pairs of integers such that their difference is equal to a given key, K.
Input format:
The first line contains number of test cases, T.
For each test case, there will be three input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Third line contains the key element.
Output format:
The output will have T number of lines.
For each test case T, output will be the total count i.e. number of times such pair exists.
*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    //printf("Enter number of test cases:");
    scanf("%d",&t);
    while(t>0)
    {
        //printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
        int n;

        //printf("Enter size of array:");
        scanf("%d",&n);

        int arr[n];
        //printf("Enter elements of array:");

        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",arr+i);
        }

        int key;
        //printf("Enter key:");
        scanf("%d",&key);

        int count=0;



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

        //printf("Number of such pairs in given array: %d\n\n",count);
        printf("\n%d\n",count);

        t--;
    }
    
    return 0;

}
