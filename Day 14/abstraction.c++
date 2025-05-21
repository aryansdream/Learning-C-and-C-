#include <iostream>
#include <string>
using namespace std;
class add {
    private:
    int m;
    public:
    int a; 
    int b;
    virtual int add1(int x, int y) = 0; // pure virtual function
    virtual string display() = 0;       // pure virtual function
};

// class add2 : public add{
//     public:
//     int x;
//     int y;
//     int add1(int x, int y){
//         int result = x + y;
//         cout << "Concatenation of two strings: " << result << endl;
//         cout << "This is a product of add2 class" << endl;
//         return result;
//     }
// };