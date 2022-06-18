//check the size of diff. type of data for your sys.
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    double b=1.90;
    char c='+';
    int sizeinteger=sizeof(a),sizedouble=sizeof(b);
    int sizechar=sizeof(c);
    cout<<"size of an integer is " << sizeinteger<< " bytes"<<endl;
    cout<<"size of a double is " <<sizedouble<<" bytes"<<endl;
    cout<<"size of a char is " <<sizechar<<" bytes"<<endl;
}   