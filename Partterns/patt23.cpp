#include<iostream>
using namespace std;
int main()
{
    int n=5;

    int i=1;
    int count=1;
    while (i<=n)
    {
       //space print
    
       int space=1;
       while(space<=n-i)
       {
           cout<<" ";
           space=space+1;
       }
       //print 2nd traingle
        int j=1;
       while(j<=i)
       {
       cout<<j;
       j=j+1;
       }
     
    
    
       //print 3rd triangle
    int start= i-1;
    while(start)
    {
        cout<<start;
        start=start-1;
    
    }
      cout<<endl;
       i=i+1;
  }
    return 0;
}