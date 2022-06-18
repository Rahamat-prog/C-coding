#include<iostream>//ceilng prolem means  just mid ke bad wala value print 
using namespace std;
int ceilng(int arr[], int size,int terget){
    int s = 0;
    int e = size-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        
        if(arr[mid] == terget){
            return arr[mid+1];//agar srif mid+1 return karegge to index print hoga 
        }
        if(terget>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        
         mid= s+(e-s)/2;
    }
    return -1;

    }
   


int main(){
    int arr[6]= {3,8,11,14,16};
    int evenIndex = ceilng(arr,6,3);
    cout<< "celing is "<<evenIndex<<endl;

    return 0;
}