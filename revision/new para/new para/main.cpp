//
//  main.cpp
//  new para
//
//  Created by apple on 08/05/23.
//

/*
 destctor : ~
 
 call autometically when the object of such class is destroyrd
 
 */

#include <iostream>
using namespace std;

class sample
{
public:
  
    sample()
    {
        cout<<"defult constrcr.."<<endl;
    }
    
    sample(int a)
    {
        cout<<"age : "<<endl;
    }
    
    ~sample()
    {
        cout<<"destctr calling"<<endl;
    }
    
    void display()
    {
        cout<<"this is display "<<endl;
    }
};


int main()
{
    sample obj;
    sample obj1(12);
}
