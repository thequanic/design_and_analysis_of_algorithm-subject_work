/*
Given already sorted array of integers . design an algo and implement it using a program to
find whether a given key is present in the array or not. Search indexes are arr[0], arr[2],arr[4],…….
Once interval arr[2^k ] < key < arr[2^(k+1)] found , prepare linear search to find key.

Input format:
The first line contains number of test cases, T.
For each test case, there will be three input lines.
First line contains n (the size of array).
Second line contains n space-separated integers describing array.
Third line contains the key element that need to be searched in the array.
Output format:
The output will have T number of lines.
For each test case, output will be “Present” if the key element is found in the array, otherwise
“Not Present”.
Also for each test case output the number of comparisons required to search the key.

*/


#include <stdio.h>
#include <stdlib.h>

int search(int low, int high, int arr[], int key )
{
    if(low>=high)
    {
        //printf("\nGiven element %d not found in given array!\n\n",key);
        printf("\nNot Present\n\n");
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
                //printf("\nGiven element %d found at index %d of given array\n\n",key,i);
                printf("\nPresent \n\n");
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
                //printf("\nGiven element %d found at index %d of given array\n\n",key,i);
                printf("\nPresent\n\n");
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
    //printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
    int t;
    //printf("Enter number of test cases:");
    scanf("%d",&t);

    while(t>0)
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
        int comp=0;
        int l=0,r=n%2==0?n-2:n-1;
        
        search(l,r,arr,key);
    

        t--;
    }
     

    return 0;

}   