/*
Given an array of non negative integers . Design a linear algo and implement it using a
program to find whether a given key is present or not . Also find total comparisons for each case and
if key is present find its index value . ( a. by iteration b. by recursion)

*/

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

    //linear search
     int comp=0,check=0;
    for(i=0;i<n;i++)
    {
        comp++;
        if(arr[i]==key)
        {
            printf("\nGiven element %d found at index %d of given array\n\n",key,i);
            printf("Number of comparasions for given element: %d\n\n",comp);
            check=1;
            break;
        }
    }

    if(check==0)
    {
        printf("\nGiven element %d not found in given array!\n\n",key);
        printf("Number of comparasions for given element: %d\n\n",comp);
    } 

    return 0;

}