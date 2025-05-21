#include <iostream>
#include <string>
using namespace std;
class add{
    public:
    int a;
    int b;
    int add1(int x, int y){
        cout << "Sum of two integers: " << x + y << endl;
        cout << "This is a product of add class" << endl;
        return x + y;
    };
    string display(){
        cout << "Hi! I am class add" << endl;
    }
};

class add2 : public add{
    public:
    int x;
    int y;
    int add1(int x, int y){
        int result = x + y;
        cout << "Concatenation of two strings: " << result << endl;
        cout << "This is a product of add2 class" << endl;
        return result;
    }
};

int main(){
    add2 obj2;
    obj2.add1(86, 10);
    obj2.display();
   
};
