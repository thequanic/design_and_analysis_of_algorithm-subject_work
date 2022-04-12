/*
Given an array of nonnegative integers, design a linear algorithm and implement it using a program 
to find whether given key element is present in the array or not. Also, find total number of
comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
 ( a. by iteration b. by recursion)


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

*/

//iterative
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t; //test cases
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

        //linear search
        int comp=0,check=0;
        for(i=0;i<n;i++)
        {
            comp++;
            if(arr[i]==key)
            {
                //printf("\nGiven element %d found at index %d of given array\n\n",key,i);
                //printf("Number of comparasions for given element: %d\n\n",comp);
                printf("\nPresent %d\n\n",comp);
                check=1;
                break;
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