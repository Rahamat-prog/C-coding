//print the numbers is even or odd
#include<iostream>
#include<math.h>
using namespace std;
int iseven(int num){//bool iseven(int num) also we can use
    if(num & 1){
        return 1;//odd
        
    }
    else{
    return 0;//even
    
    }
}

int main(){
    int num;
    cin>>num;
    //int iseven(num);

if(iseven(num)){
    //return 1;

    cout<<"the number is odd"<<endl;
}
else{
    
    cout<< "number is even" <<endl;
}
    
    return 0;
}
