//Given sorted array .count duplicate elements present . 


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