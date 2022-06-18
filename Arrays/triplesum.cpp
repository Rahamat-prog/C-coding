#include<iostream>
using namespace std;

    void printArray(int arr[], int n){
        for(int i = 0; i<n; i++){
            cout<< arr[i]<<endl;
            //cout<< "kya samjte ho tum"<<endl;
        }
    }
    void sumthree(int arr[], int n){
        for(int i = 0; i<n; i++){
            cout<< "hi"<<" ";
            for(int j =i+1; j<n; j++){
                cout<< "hello"<<" ";
                for(int k=j+1; k<n; k++){
                    cout<<"how are you"<<" ";
                    
                }
            }
        }
    }
    int main(){
    int arr[2]= {5,2};
    printArray(arr, 10);
    sumthree(arr,10);
    return 0;
    
}