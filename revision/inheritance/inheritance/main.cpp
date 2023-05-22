 //
//  main.cpp
//  inheritance
//
//  Created by apple on 08/05/23.
//

/*
 inheritance : ability to adpt the behavior of parent class into child
 here two or more class in parent child relation
 
 note : obj are created only of the least child class
 
 types
 1)single level
 2)mulitileval
 3)mulityple
 4)herichicle
 5)hybrid
 
  */

#include <iostream>
using namespace std;

class parent
{
public:
    void displayP()
    {
        cout<<"parent class "<<endl;
    }
};

class child:public parent
{
public:
    void displayC()
    {
        cout<<"child class "<<endl;
    }
};

int main()
{
    child c1;
    
    c1.displayC();
    c1.displayP();
}
