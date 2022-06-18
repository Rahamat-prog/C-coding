#include<iostream>//linear search in array
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

bool search(int arr[],int n, int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
 

    int arr[5] = {1,4,3,7,5};
    printArray(arr,5);
    cout<<"enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool find=search(arr,5,key);
    if(find){
        cout<< "Key is present"<<endl;
    }
    else{
        cout<<"key is absent";
    }
    return 0;
}