#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start =0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    //cout<<arr[]<<" ";
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){  
    int arr[5] = {4,3,2,6,7};
    int brr[4]={3,2,5,1};
     reverse(arr,5);
     reverse(brr,4);
     printArray(arr,5);
     printArray(brr,4);
   
    return 0;
}
