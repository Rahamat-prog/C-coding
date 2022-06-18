#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
       int j=1;
      while(j<=n)
        {
           int count=n-j+1;
            cout<<count<<" ";
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
        return 0;
}