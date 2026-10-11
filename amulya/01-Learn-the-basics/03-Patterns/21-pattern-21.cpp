/* Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
*   *
*   *
*   *
*****
Print the pattern in the function given to you.*/
# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            cout<<"*";
            else
            cout <<" ";
        }
        cout <<endl;
       
    }
     return 0;
}