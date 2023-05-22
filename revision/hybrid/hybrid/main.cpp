//
//  main.cpp
//  hybrid
//
//  Created by apple on 10/05/23.
//

#include <iostream>
using namespace std;

class parent1
{
public:
    void display1()
    {
        cout<<"parent 1"<<endl;
    }
};
class child1:public parent1
{
public:
    void display2()
    {
        cout<<"child 1"<<endl;
    }
};
class child2:public parent1
{
public:
    void display3()
    {
        cout<<"child 2"<<endl;
    }
};
class child3:public child1,public child2
{
public:
    void display4()
    {
        cout<<"child 3"<<endl;
    }
};

int main()
{
    child3 c1;
    
    c1.display4();
    c1.child1::display1();//scope resolution oprator & virtual oprator
    c1.display2();
    c1.display3();
}
//virtual keyword make only one copy of parent class
//class b:virtual public a
