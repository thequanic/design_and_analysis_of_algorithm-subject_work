/* 
Give  test cases, T.
For each test case, there will be two input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Output Format:
The output will have T number of lines.
For each test case, output will be 'YES' if duplicates are present otherwise ‘NO
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
    int t;
    //test cases
    scanf("%d",&t);
    while(t>0)
    {
        int n;
       // printf("Enter size of array::");
        scanf("%d",&n);

        int arr[n];
       // printf("Enter elements of array::");

        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        merge_sort(arr,0,n-1);

       // printf("Sorted array is::\n");
       /* for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }*/ 

    
    
        int check=0;
        for(i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                check=1;
                printf("\nYES\n");
                break;
            }
        
        }

        if(check==0)
        {
            printf("NO");
            
        }
    
        t--;
    }
    
    return 0;
}