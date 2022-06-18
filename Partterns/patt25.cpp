
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int row=1;
    while(row<n)
    {
        int j=row;
        while(j>=row)
        {
            cout<<j;
            j=j-1;
        }
    
    cout<<endl;
    row=row+1;
    }
    return 0;
}