#include<iostream>
#include<conio.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i] <<" ";

  }
    cout<<endl;
    cout<<"hi";

}

void sort(int arr[], int n){
    
    int low = 0, mid = 0;
    int high = n-1;

    while(mid<=high){

        if(arr[mid] == 0){

        swap(arr[low],arr[mid]);
        low++;
        mid++;
          
          
        }

        else if(arr[mid] == 1){
            mid++;
          
        }
        else{

        swap(arr[mid],arr[high]);
        high--;
        
        }
 } 
    
}


int main(){
    int arr[8] = {1,2,0,2 ,0};
    sort(arr,5);
    printArray(arr,5);
   return 0;  
    
}