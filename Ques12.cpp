/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
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
If no Kth element is present, output should be “not present”.

*/

#include <iostream>
#include <queue>
using namespace std;


int main()
{

    int test;
    cout<<"Enter number of test cases:";
    cin>>test;

    while(test>0)
    {
        priority_queue <int> maxHeap;
        priority_queue <int> minHeap;

        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            maxHeap.push(arr[i]);
            minHeap.push(-1*arr[i]);
        }

        int k;
        cin>>k;

        int key=k;

        int temp;

            while(k>0)
            {

                if(maxHeap.empty()){cout<<"\nnot present\t";break;}
                int temp2= maxHeap.top();
                maxHeap.pop();
                if(k==key || temp2!=temp)
                {
                    k--;
                }
                temp=temp2;
            }

            cout<<"\n"<<temp<<"\t";

        k=key;

            while(k>0)
            {

                if(minHeap.empty()){cout<<"not present\n";break;}
                int temp2= minHeap.top() *-1;
                minHeap.pop();
                if(k==key || temp2!=temp)
                {
                    k--;
                }
                temp=temp2;
            }

            cout<<temp<<"\n";

        test--;
    }

    
    return 0;

}