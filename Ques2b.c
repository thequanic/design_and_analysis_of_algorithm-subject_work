/*
Given an already sorted array of integers . Design an algo and implement it using a program
to find whether a given key is present in the array or not . Also find total comparisions for each input
case . 
(binary search )
a. By iteration
b. By recursion
*/

//recursive

#include <stdio.h>
#include <stdlib.h>

int binary_search(int low, int high, int arr[], int key ,int comp)
{
    if(low>high)
    {
        printf("\nGiven element %d not found in given array!\n\n",key);
        printf("Number of comparasions for given element: %d\n\n",comp);
        return -1;
    }

    int mid=low+(high-low)/2;
    comp++;

    if(arr[mid]==key)
    {
        printf("\nGiven element %d found at index %d of given array\n\n",key,mid);
        printf("Number of comparasions for given element: %d\n",comp);
        return mid;
    }

    if(arr[mid]>key)
    {
        return binary_search(low,mid-1,arr,key,comp);
    }

    if(arr[mid]<key)
    {
        return binary_search(mid+1,high,arr,key,comp);
    }
}


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
    int comp=0;
    int l=0,r=n-1;
    
    binary_search(l,r,arr,key,comp);
  
     

    return 0;

}