/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

A

AB

ABC

ABCD

ABCDE

Print the pattern in the function given to you.*/
#include <iostream>
using namespace std;
int main()
{
     int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(char j='A';j<'A'+i;j++)
        {
            cout<<j;
        }
        cout <<endl;
    }
    return 0;

}