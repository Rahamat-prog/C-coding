#include<iostream>
#include<math.h>
using namespace std;
void printarray(int arr[],int size){
    cout << "printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<< arr[i];
    }
    cout<<endl;
}
int main(){
    int first[15]={2,7};
    int n=15;
    printarray(first,15);
    
    int sec[10]={0};
      n= 10;
    printarray(sec,10);
    return 0;
}