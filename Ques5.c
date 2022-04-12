/*
Given a sorted array of positive integers, design an algorithm and implement it using a program to 
find three indices i, j, k such that arr[i] + arr[j] = arr[k].
Input format:
The first line contains number of test cases, T.
For each test case, there will be two input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Output:
The output will have T number of lines.
For each test case T, print the value of i, j and k, if found else print “No sequence found”
*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    //printf("Enter number of test cases:");
    scanf("%d",&t);

    while(t>0)
    {
        //printf("\n\nCODE BY: DEVANSH GOEL, SECTION G, 4TH SEM, STUDENT ID: 20011990, GRAPHIC ERA HILL UNIVERSITY\n\n");
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

        int check=0;


        for(i=0;i<n;i++)
        {
            int j;
            for(j=0;j<n;j++)
            {
                int k;
                for(k=0;k<n;k++)
                {
                    if(arr[i]+arr[j]==arr[k] && (i!=j && j!=k))
                    {
                        if(check==0)
                        {
                            printf("\n%d,%d,%d",i,j,k);
                            check=1;
                            break;
                        }
                        
                    }
                }
            }
        }

        if(check==0)
        {
            printf("\n\nNo sequence found");
        }

        printf("\n\n");

        t--;
    }
    return 0;

}
  