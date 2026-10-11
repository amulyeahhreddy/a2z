/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Print the pattern in the function given to you.
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int left=j;
            int right=(n*2)-j-2;
            int bottom=(n*2)-i-2;
            cout<<(n-min(min(top,bottom),min(right,left)))<<" ";

        }
        cout<<endl;
    }
    return 0;
}