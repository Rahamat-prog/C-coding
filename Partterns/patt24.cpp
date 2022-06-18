
#include <iostream>
using namespace std;
int main(){
    int n=4;
    int row=1;
while(row<=n){
    //int space=row-1;
    int space=1;
    while(space<row){
        cout<<" ";
        //space=space-1;
        space=space+1;

    }
    int col=row;
    while(col<=n){
        cout<<col;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}
return 0;
}

