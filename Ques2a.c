/*
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).
(binary search )

Input format:
The first line contains number of test cases, T.
For each test case, there will be three input lines.
First line contains n (the size of array).
Second line contains n space-separated integers describing array.
Third line contains the key element that need to be searched in the array.
Output format:
The output will have T number of lines.
For each test case, output will be “Present <comparisons>” if the key element is found in the array, otherwise
“Not Present”.
Also for each test case output the number of comparisons required to search the key.


a. By iteration
b. By recursion
*/


//iterative

#include <stdio.h>
#include <stdlib.h>


int main()
{

    //printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
    int t;
    scanf("%d",&t); //number of test cases
    while (t>0)
    {
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
        //printf("Enter element to be searched::");
        scanf("%d",&key);

        //binary search
        int comp=0,check=0;
        int l=0,r=n-1;
        

        while(l<=r)
        {
            int mid=l+(r-l)/2;

            comp++;

            if(arr[mid]==key)
            {
                //printf("\nGiven element %d found at index %d of given array\n\n",key,mid);
                //printf("Number of comparasions for given element: %d\n",comp);
                printf("\nPresent %d\n\n",comp);
                check=1;
                break;
            }

            else if(arr[mid]<key)
            {
                l=mid+1;
            }

            else if(arr[mid]>key)
            {
                r=mid-1;
            }
        }

        if(check==0)
        {
            //printf("\nGiven element %d not found in given array!\n\n",key);
            //printf("Number of comparasions for given element: %d\n\n",comp);
            printf("\nNot Present %d\n\n",comp);
        } 
        t--;

    }

    return 0;

} 