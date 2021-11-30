/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mohammed Almeaither
 */

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string operation;
    double a,b, result;
    cout<<"Enter operation and two operands: ";
    cin>>operation>>a>>b;
    if(operation=="+")
    {
        result = a+b;
        cout<<a<<" + "<<b <<" = "<<result;
    }
    else if(operation=="-")
    {
        result = a-b;
        cout<<a<<" - "<<b <<" = "<<result;
    }
    else if(operation=="/")
    {
        result = a/b;
        cout<<a<<" / "<<b <<" = "<<result;
    }
    else if(operation=="*")
    {
        result = a*b;
        cout<<a<<" * "<<b <<" = "<<result;
    }
    else
    {
        cout<<"invalid input"<<endl;
    }
    return 0;
}
