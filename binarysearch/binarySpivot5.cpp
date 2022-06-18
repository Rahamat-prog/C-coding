#include<iostream>
using namespace std;
int getpivot(int arr[], int n){//pivot in an array yani minimum value print.
int s= 0, e=n-1;
int mid = s+(e-s)/2;
while(s<e){
    if(arr[mid]>=arr[0]){
        s = mid+1;
    }
    else{
        e = mid;
    }
    mid = s+(e-s)/2;
}
return s;
}

int main(){
    int arr[6] = {2,4,8,9,1};
    cout<< " get minimun pivot at index is "<< getpivot(arr,5);

    return 0;
}
