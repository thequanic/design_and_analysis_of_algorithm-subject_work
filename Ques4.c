/*
Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array or
not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))

*/ 


#include <stdio.h>
#include <stdlib.h>


int binary_search(int low, int high, int arr[], int key,int count)
{
    if(low>high)
    {
        
        return count;
    }

    int mid=low+(high-low)/2;


    if(arr[mid]==key)
    {
       
        count++;
        count=binary_search(low,mid-1,arr,key,count);
        count=binary_search(mid+1,high,arr,key,count);
        return count;

    }

    if(arr[mid]>key)
    {
        count=binary_search(low,mid-1,arr,key,count);
        return count;
    }

    if(arr[mid]<key)
    {
        count=binary_search(mid+1,high,arr,key,count);
        return count;
    }
}


int main()
{
   // printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
    int t;
   // printf("Enter number of test cases:");
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
       // printf("Enter key to be found:");
        scanf("%d",&key);

        int count=binary_search(0,n-1,arr,key,0);

        if(count>0)
        {
            printf("\n\n%d-%d\n\n",key,count);
        }
        else
        {
            printf("\n\nKey Not Found\n\n");
        }
        t--;
    }


    return 0;

}