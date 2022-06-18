//numbers print 1 to n
#include<iostream>
#include<math.h>
using namespace std;
void counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
     cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    
   counting(n);
  return 0;
}