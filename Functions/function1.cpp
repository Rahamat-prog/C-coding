#include<iostream>//print power of numbers.
#include<math.h>
using namespace std;
int power(int a, int b){
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
    //cout<< ans <<endl;
}

int main(){
    int a,b; 
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    int ans =  power(a,b);
    cout<<"answer is "<<ans<<endl;
    return 0;
}
