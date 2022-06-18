//print maximum value in array
#include<iostream>
using namespace std;
void update(int arr[],int n){
    //arr[0]=10;
    for(int i=0;i<n;i++){
        cout<< arr[i]<< endl;
    }
}
int main(){
    int arr[5]= {2,4,3,7,0};
    update(arr,5);
    for(int i=0;i<5;i++){
        cout<< arr[i]<<endl;
    }
return 0;
}