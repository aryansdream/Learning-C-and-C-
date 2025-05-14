#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    string address;
    void showname(){
        cout<< "The Person is "<<name<<"."<<endl;
    }
    void showage(){
        cout<<name<<" is "<<age<<"Years old."<<endl;
    }
    void showadd(){
        cout<<name<<" lives at "<<address<<"."<<endl;
    }

};
int main(){
    person p1;
    p1.name = "John";
    p1.age = 30;
    p1.address = "Flat No. 18, 36th Floor, AVA block, Virat Complex, Bangalore, Karnataka, India";
    p1.showname();
    p1.showage();
    p1.showadd();
    return 0;
}