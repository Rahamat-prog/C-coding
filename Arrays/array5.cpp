#include<iostream>//update the value of array in function 
//#include<math.h>
using namespace std;

    void update(int arr[], int n){
        arr[0]= 100;
        for(int i=0;i<n;i++){
            cout<< arr[i] <<" ";
        }
        cout<< endl;
    }
    int main(){
    int arr[5] = {3,2,5,6,8};
    update(arr,5);
    for(int i=0;i<5;i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}