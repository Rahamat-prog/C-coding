#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    //temp arrays
    int a[n1];
    int b[n2];
    //copy the values
    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
     
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }
//merge two sorted arrays
        int i=0;
        int j=0;
        int k = l;
        
    while(i < n1 && j< n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] = b[j];
             j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = a[i];
        k++; i++;
    }
    while(j < n2){
        arr[k] = b[j];
        k++; j++;
    }   
    
    
}
    


void mergesort(int arr[], int l,int r){

       if(l<r){

       int mid = (l+r)/2;
        //left site merge
        mergesort(arr, l, mid);
        //right side merge
        mergesort(arr, mid+1, r);
        merge(arr, l, mid, r);
         
    }
   
    }

int main(){
    int arr[5]= {5,4,3,2,1};
    int n=5;
    
    mergesort(arr, 0, n);

    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;

    return 0;

}