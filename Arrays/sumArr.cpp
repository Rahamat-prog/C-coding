#include<iostream>
using namespace std;
void sum(int arr[], int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans+arr[i];
        
    }
    cout<<ans << " ";
    cout<<endl;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
  
int main()
{
    
    int arr[4] ={1,3,5,6};
    sum(arr,4);
    printArray(arr,4);
    return 0;
}