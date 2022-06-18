#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i =s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt ++;
        }
        
    }
    //place pivot
   int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);
    //make left and right part 
    int i = s, j = e;

    while(i<pivotIndex && j>pivotIndex){
        
        while(arr[i]<=pivotIndex){
            i++;
        }
        while(arr[j] > pivotIndex){
            j--;
        }
    if (i<pivotIndex && j>pivotIndex){
         swap(arr[i++], arr[j--]);
            
    }
} //cout<< "hi"<<endl;
 return pivotIndex;
    
}
   
void quicksort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return ;
    }
    //partition
    int p = partition(arr, s, e);
    //left part sort
    quicksort(arr, s, p-1);
    //right part sort
    quicksort(arr, p+1, e);
}
 int main(){

    int arr[5] = {2,4,1,6,9};
    int n = 5;
    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++){

        cout<< arr[i] << " ";
    }
    cout<< endl;

      return 0;
}