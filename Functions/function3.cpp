//factorial print
#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial = factorial*i;
    }
    return factorial;
}
int nCr(int n, int r){
    int num = factorial(n);
    int demon = factorial(n-r)*factorial(r);
    return num/demon;

}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer is " <<nCr(n,r);
    return 0;
}