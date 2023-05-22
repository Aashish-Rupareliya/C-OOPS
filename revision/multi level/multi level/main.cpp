//
//  main.cpp
//  multi level
//
//  Created by apple on 10/05/23.
//

#include <iostream>
using namespace std;

class parent
{
public:
    void display1()
    {
        cout<<"parent 1"<<endl;
    }
};

class child1:public parent
{
public:
    void display2()
    {
        cout<<"child 1 "<<endl;
    }
};
class child2:public child1
{
public:
    void display3()
    {
        cout<<"child 2 "<<endl;
    }
};

int main()
{
    child2 c1;
    
    c1.display1();
    c1.display2();
    c1.display3();
}
