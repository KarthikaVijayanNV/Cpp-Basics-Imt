#include<iostream>
using namespace std;
int main()
{
    int a; //declaration
    a=10; //initialization
    cout<<"size of int  "<<sizeof(a)<<endl;
    
    float b;
    cout<<"size of float  "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char  "<<sizeof(c)<<endl;

    bool d;
    
    cout<<"size of bool  "<<sizeof(d)<<endl;

    //usage of modifiers -you can increase the size of int -you can modify the size of datatypes
    short int si;
    long int li;
    cout<<"size of short int  "<<sizeof(si)<<endl;
    cout<<"size of long int  "<<sizeof(li)<<endl;

    return 0;
}