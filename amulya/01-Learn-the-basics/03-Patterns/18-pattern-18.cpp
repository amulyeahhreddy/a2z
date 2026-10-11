/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

E 

D E 

C D E 

B C D E 

A B C D E

Print the pattern in the function given to you.*/
#include <iostream>
using namespace std;
int main()
{
     int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        char ch='A'+i-1;
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<ch;
            ch++;
        }
        cout <<endl;
    }
    return 0;

}