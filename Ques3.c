/*
Given already sorted array of integers . design an algo and implement it using a program to
find whether a given key is present in the array or not. Search indexes are arr[0], arr[2],arr[4],…….
Once interval arr[2^k ] < key < arr[2^(k+1)] found , prepare linear search to find key.
*/


#include <stdio.h>
#include <stdlib.h>

int search(int low, int high, int arr[], int key )
{
    if(low>=high)
    {
        printf("\nGiven element %d not found in given array!\n\n",key);
        
        return -1;
    }

    int mid=low+(high-low)/2;


    if(arr[mid]<=key && arr[mid+2]>=key)
    {

        int i;
        for(i=mid;i<=mid+2;i++)
        {
            if(arr[i]==key)
            {
                printf("\nGiven element %d found at index %d of given array\n\n",key,i);
                break;
            }
        }

        return i;
    }

    if(arr[mid]>=key && arr[mid-2]<=key)
    {

        int i;
        for(i=mid-2;i<=mid;i++)
        {
            if(arr[i]==key)
            {
                printf("\nGiven element %d found at index %d of given array\n\n",key,i);
                break;
            }
        }

        return i;
    }

    if(arr[mid]>key)
    {
        return search(low,mid-2,arr,key);
    }

    if(arr[mid]<key)
    {
        return search(mid+2,high,arr,key);
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
    int l=0,r=n%2==0?n-2:n-1;
    
    search(l,r,arr,key);
  
     

    return 0;

}