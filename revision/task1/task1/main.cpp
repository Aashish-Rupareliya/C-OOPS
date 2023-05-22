//
//  main.cpp
//  task1
//
//  Created by apple on 12/05/23.
//

#include <iostream>
using namespace std;

class student_7
{
public:
    int mark;
    string name;
    
    void input()
    {
        cout<<"enter name : "<<endl;
        cin>>name;
        
        cout<<"enter marks : "<<endl;
        cin>>mark;
    }
    
    void display()
    {
        cout<<"your name : "<<name<<endl;
        cout<<"your marks :"<<mark<<endl;
    }
    
};

int main()
{
    student_7 obj[3];
    
    int i=o;
    
    for(i=0;i<3;i++)
    {
        obj[i].input();
        obj[i]+=obj[i].input()
    }
    
    for(i=0;i<3;i++)
    {
        obj[3].display();
    }
    
    return 0;
}
