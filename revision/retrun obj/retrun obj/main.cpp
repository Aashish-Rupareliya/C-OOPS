//
//  main.cpp
//  retrun obj
//
//  Created by apple on 12/05/23.
//

#include <iostream>
using namespace std;

class A
{
public:
    int a=23;
    string name="hello";
};

A modify()
{
    A obj;
    
    obj.a=90;
    obj.name="world";
    
    return obj;
}

int main()
{
    A o1;
    A o2;
    
    cout<<o1.a<<endl;
    cout<<o1.name<<endl;
    
    o2=modify();
    
    cout<<o2.a<<endl;
    cout<<o2.name<<endl;
    
    return 0;
}
