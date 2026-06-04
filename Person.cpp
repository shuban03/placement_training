#include <iostream>
#include <string>
using namespace std;

class Person{
    string status;
};
class Admin : public Person{
    protected:
    string name;
    string password;
};
class Admin2 : public Admin{
    
};

int main(){
    Admin2 a;
    a.status = "active"; // Error: 'status' is a private member of 'Person'
    a.name = "admin"; // Error: 'name' is a protected member of 'Admin'
    a.password = "password"; // Error: 'password' is a protected member of 'Admin'
    return 0;
}

