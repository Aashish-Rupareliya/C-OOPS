//
//  main.cpp
//  task
//
//  Created by apple on 19/04/23.
//

#include <iostream>
using namespace std;

string username,password,confirm_password;

class TravelAgency
{
public:
    void welcome();
};

class Registration
{
public:
    bool registerUser();
};

class Login
{
public:
    bool loginUser();
};


void TravelAgency::welcome()
{
    cout << "           WELCOME TO TOPS TRAVELS         ";
    cout << "\n5 Most Popular Destinations" ;
    cout << "\n1. Ahmedabad" ;
    cout << "\n2. Vadodara" ;
    cout << "\n3. Surat" ;
    cout << "\n4. junagadh" ;
    cout << "\n5. Rajkot" ;
}

bool Registration::registerUser()
{
    extern string username, password, confirm_password;

    cout << "\n            Registration Process            " ;
    cout << "\nEnter username/email-id : ";
    cin >> username;

    cout << "\nEnter Password : ";
    cin >> password;

    cout << "\nEnter Confirm Password : ";
    cin >> confirm_password;

    if (password == confirm_password)
    {
        cout << "\nRegistration Success" ;
        return true;
    }
    else
    {
        cout << "\npswd and c_pswd does not match !!!!!" ;
        return false;
    }
}

bool Login::loginUser() {
  extern  string username, password;

    cout << "\n              Login             " ;
    cout << "\nEnter email/user_name : ";
    cin >> username;

    cout << "\nEnter password : ";
    cin >> password;
    
    if(username==username && password==confirm_password)
    {
        cout<<"thank you ";
    }
    else
    {
        cout<<"denied";
    }
   
    

    return 0;
}

int main()

{
   
        TravelAgency agency;
        Registration registration;
        Login login;
        char choice;
        
        agency.welcome();
        
        cout << "\nDo you want to register? ['y/n'] : ";
        cin >> choice;
        
        if (choice == 'y' || choice == 'Y')
        {
            if (registration.registerUser())
            {
                login.loginUser();
            }
        }
        else
            {
            cout << "\nThank you" ;
            }
    
        
        return 0;
    
}
