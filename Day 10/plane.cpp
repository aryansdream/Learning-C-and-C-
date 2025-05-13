#include <iostream>
using namespace std;
class Plane {
public:
   string name;
   string type;
   string model;
   void fly() {
      cout << name << " is flying." << endl;
   }
   void capacity() {
      cout << name << " has a capacity of 200 passengers." << endl;
   }
   void speed() {
      cout << name << " has a cruising speed of 900 km/h." << endl;
   }
   void displayType() {
        cout << name << " is a "<< type << "aircraft." << endl;
   }
};
int main(){
    Plane p;
    p.name = "Boeing 747";
    cout << p.name << endl;
    p.type = "Commercial ";
    cout << p.type << endl;
    p.model = "747-400";
    cout << p.model << endl;
    p.fly();
    p.capacity();
    p.speed();
    p.displayType();
    cout << endl;

    Plane q;
    q.name = "F-16";
    cout << q.name << endl;
    q.type = "Military ";
    cout << q.type << endl;
    q.model = "F-16C";
    cout << q.model << endl;
    q.fly();
    q.capacity();
    q.speed();
    q.displayType();
    return 0;
}
 