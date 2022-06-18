#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int name=1;
    while (i<=n)
    {
       //space print
    
       int space=1;
       while(space<=n-i)
       {
           cout<<" ";
           space=space+1;
       }
       
        int j=1;
       while(j<=i)
       {
       cout<<name;
       name=name+1;
       j=j+1;
       }
    cout<<endl;
    i=i+1;
}
    return 0;
}