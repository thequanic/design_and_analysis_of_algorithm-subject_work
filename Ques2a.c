/*
Given an already sorted array of integers . Design an algo and implement it using a program
to find whether a given key is present in the array or not . Also find total comparisions for each input
case . 
(binary search )
a. By iteration
b. By recursion
*/


//iterative

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
    printf("Enter element to be searched::");
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
            printf("\nGiven element %d found at index %d of given array\n\n",key,mid);
            printf("Number of comparasions for given element: %d\n",comp);
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
        printf("\nGiven element %d not found in given array!\n\n",key);
        printf("Number of comparasions for given element: %d\n\n",comp);
    } 

    return 0;

}