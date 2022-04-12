/*Given an unsorted array of integers, design an algorithm and implement it using a program to
find Kth largest and smallest element in the array. (Worst case Time Complexity = O(n))
Input Format:
The first line contains number of test cases, T.
For each test case, there will be three input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Third line contains K.
Output Format:
The output will have T number of lines.
For each test case, output will be the Kth largest and smallest array element.
If no Kth element is present, output should be “not present”.*/

#include <stdio.h>

void countingSort(int array[], int size) {
  int output[10];

  // Find the largest element of the array
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // The size of count must be at least (max+1) but
  // we cannot declare it as int count(max+1) in C as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int count[10];

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int k;
        scanf("%d",&k);

        countingSort(arr,n);

        int temp=k;
        i=n-1;

        while(k>1)
        {
            if(arr[i]!=arr[i-1])
            {
                k--;
                
            }
            i--;
        }

        printf("\n%d",arr[i]);

        k=temp;i=0;
        while(k>1)
        {
            if(arr[i]!=arr[i+1])
            {
                k--;
            }
            i++;
        }

        printf(" %d\n",arr[i]);

        t--;
    }
}