#include<iostream>
using namespace std;
int main()
{   

   int ans=0;
   int x;
   cin>>x
    
        while(x!=0)
        {
            
        int digit= x % 10;
        ans= (ans*10)+digit;
         x= x / 10;
        }
        //return ans;
         cout<<ans;
         return 0;        
}