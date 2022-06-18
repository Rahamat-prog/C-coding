#include<iostream>
using namespace std;//Search an element search and sorted array
int keysearch(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){

        if(arr[mid]== key)
            return mid;
        
        if(arr[s]<arr[mid]){
            if(key>=arr[s] && key<arr[mid]){
                e = mid-1;
        
            }
            else{
                s = mid+1;
            }

        }
            else{
                if(key>arr[mid] && key<=arr[e]){
                s=  mid+1;
            }
            else{
                e = mid-1;
            }
            }
            mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    int arr[7]= {20,30,40,50,60,5,10};
    int index = keysearch(arr,7,10);
    cout<< "key at index is " << index<<endl;
    return 0;

}
    
    
