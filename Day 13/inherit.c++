#include <iostream>
using namespace std;
class vehicle{
    public:
    vehicle() {
        cout << "This is a vehicle class" << endl;
    }
    };
class car: public vehicle{
    public:
    car() {
        cout << "This is a car class" << endl;
    }
};  
class bike: public vehicle{
    public:
    bike() {
        cout << "This is a bike class" << endl;
    }
};
int main() {
    car c;
    bike b;
    return 0;
}
