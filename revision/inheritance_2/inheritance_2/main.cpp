//
//  main.cpp
//  inheritance_2
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
      cout<<"parent 1 "<<endl;
  }
};
class parent2
{
public:
    void display2()
    {
        cout<<"parent 2 "<<endl;
    }
};
class child:public parent1,public parent2
{
public:
    void display3()
    {
        cout<<"child 1 "<<endl;
    }
};

int main()
{
    child c1;
    
    c1.display1();
    c1.display2();
    c1.display3();
    
}
