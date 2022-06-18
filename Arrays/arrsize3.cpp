#include<iostream>//print size of array
#include<math.h>
using namespace std;
int main(){
    int number[5]={1,2,3,8,0};
    int sizenum= sizeof(number);
    int sizeint = sizeof(int);
    cout<<sizenum<<endl;
    cout<< sizeint;
    return 0;
}
