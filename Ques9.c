/* given an unsorted array . Design an algorithm and implement it to
find the duplicate elements and complexity should be O(nlogn)
*/

#include <stdio.h>
#include <stdlib.h>

void merge_sorted(int arr[],int l,int m, int r)
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
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
  
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
  
   
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void merge_sort(int arr[], int l, int r)
{
    if (l < r) 
    {
       
        int m = l + (r - l) / 2;
 
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
  
        merge_sorted(arr, l, m, r);
    }
}

int main()
{
    int n;
    printf("Enter size of array::");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array::");

    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    merge_sort(arr,0,n-1);

    printf("Sorted array is::\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

   
    int count=0;
    int temp=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]==temp && i!=1)
        {
            continue;
        }
        else if(arr[i]==arr[i-1])
        {
            count++;
            temp=arr[i];
        }
    }

    printf("\n\nNumber of duplicate elements: %d\n\n",count);
    



    return 0;
}