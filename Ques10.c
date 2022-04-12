/*
Given an unsorted array of integers, design an algorithm and implement it using a program to sort 
an array of elements by dividing the array into two subarrays and combining these subarrays after 
sorting each one of them. Your program should also find number of comparisons and inversions
during sorting the array.
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
Third line will give total number of inversions required. 
*/

#include <stdio.h>
#include <stdlib.h>

int merge_sorted(int arr[],int l,int m, int r,int *comp)
{
     int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
  
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  

    i = 0;
    j = 0; 
    k = l;
    int inv_count=0;
    while (i < n1 && j < n2) 
    {
        (*comp)++;
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
           inv_count = inv_count + (n1- i);
        }
         
        k++;
    }
  
  
    while (i < n1) 
    {
       // (*comp)++;
        arr[k] = L[i];
        i++;
        k++;
    }
  
   
    while (j < n2) 
    {
       // (*comp)++;
        arr[k] = R[j];
        j++;
        k++;
    }

    return inv_count;

}

int merge_sort(int arr[], int l, int r,int *comp)
{
    int inv_count=0;
    if (l < r) 
    {
       
        int m = l + (r - l) / 2;
   
        inv_count+=merge_sort(arr, l, m,comp);
        inv_count+=merge_sort(arr, m + 1, r,comp);
  
        inv_count+=merge_sorted(arr, l, m, r,comp);
    }
    return inv_count;
}

int main()
{
    int t;
    //test cases
    scanf("%d",&t);
    while(t>0)
    {
        int n;
       //  printf("Enter size of array::");
        scanf("%d",&n);

        int arr[n];
       // printf("Enter elements of array::");

        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int comp=0;
        int inv_count=merge_sort(arr,0,n-1,&comp);

       // printf("Sorted array is::\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\ncomparisons=%d\ninversions=%d\n",comp,inv_count);

    
    
        t--;
    }
    
    return 0;
}   