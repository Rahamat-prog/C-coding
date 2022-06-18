#include<iostream>
using namespace std;
int main()
{   
    cout<<"enter the value of n:"<<endl;
     int n;
     cin>>n;
    
    int i=1;
    for(; ; )
    {
        if(i<=n)
        {
            cout<<i<<endl;
            i++;
        }
        //i++;
    }
    return 0;
}