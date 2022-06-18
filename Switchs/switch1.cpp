#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the amount:"<<endl;
    cin>>n;
    int num = 20;
     num = 10;
    num = 10;
    num = 100;
    //cin>>num;
    switch(num){
        case 100 :
        cout<<"100 note is 12 pices"<<endl;
        //break;
        case 50 :
        cout<<"50 note is 2 pices"<<endl;
       // break;
        case 20:
        cout<<"20 note is 1 pices"<<endl;
        //break;
        case 10 :
        cout<<"10 note is 1 pices"<<endl;
        break;
        default :
        cout<<"please enter valid note:"<<endl;
    }
    return 0;
}