/*
Given an array of integers . design an algo and implement it using a program to find 3
indices i , j , k i.e. arr[i] + arr[j] = arr[k]
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

    int check=0;

    printf("\n\nAll possible pairs of i,j and k are:\n\n");

    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            int k;
            for(k=0;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    if(check==0)
                    {
                        printf("\n\n  i  \t  j  \t  k  \t\n");
                    }
                    printf("%5d\t%5d\t%5d\n",i,j,k);
                    check=1;
                }
            }
        }
    }

    if(check==0)
    {
        printf("\n\nNo such pair found !");
    }

    printf("\n\n");

    return 0;

}
