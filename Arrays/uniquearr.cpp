#include<iostream>
using namespace std;

void findUnuique(int arr[],int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    cout<< ans;
    //return ans;
    cout<<endl;
    
}
void printArray(int arr[],int n){
  cout<<"print array"<<endl;
    for(int i=0;i<n;i++){
     
    cout<< arr[i] <<" ";
    }

}
int main(){
    int arr[5]={4,3,4,5,3};
    findUnuique(arr,5);
    printArray(arr,5);
    return 0;
}