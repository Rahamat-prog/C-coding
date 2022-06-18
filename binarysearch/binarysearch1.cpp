#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){//print index of key
int start = 0;
int end= size-1;
int mid = start + (end-start) /2;
while(start<=end){
    if(arr[mid] ==key){
        return mid;
    }
    //go to right wala part
    if(key>arr[mid]){
        start= mid + 1;
    }
    else{
        end = mid - 1;
    }
    mid = start+(end-start)/2;
}
return -1;
}
int main(){

    int even[6]= {3,8,11,14,16};
    int evenIndex= binarysearch(even,6,3);
     cout<< "index of 16 is "<<evenIndex <<endl;

    return 0;
}