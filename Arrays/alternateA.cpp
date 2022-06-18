#include<iostream>
using namespace std;
void alternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i < i+1){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printaArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6] = {4,3                 ,5,7,0,8};
    alternate(arr,6);
    printaArray(arr,6);

    return 0;
}
