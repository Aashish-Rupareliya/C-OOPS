//
//  main.cpp
//  PARAMETER
//
//  Created by apple on 08/05/23.
//

#include <iostream>
using namespace std;

class travel{
public:
    int age;
    string n1,n2;
    
    travel()
    {
        cout<<"constr call...."<<endl;
    }
    travel(int years, string name,string city)
    {
        age=years;
        n1=name;
        n2=city;
    }
    
    void display(void)
    {
        cout<<endl<<"age : "<<age<<endl;
        cout<<"name : "<<n1<<endl;
        cout<<"city : "<<n2<<endl;
    }
};

int main()
{
    travel t1;
    travel t2(12,"abc","amd");
    
    t1.display();
    t2.display();
    return 0;
}
