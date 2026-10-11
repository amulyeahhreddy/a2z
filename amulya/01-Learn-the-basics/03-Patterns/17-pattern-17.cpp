# include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(char j='A';j<'A'+i;j++){
        cout<<j;
     ch=j;}
        for(char j=ch-1;j>='A';j--)
        cout<<j;
         for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}