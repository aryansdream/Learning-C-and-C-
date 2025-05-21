#include <iostream>
#include <string>
using namespace std;
class add{
    public:
    int a;
    int b;
    int add1(int x, int y){
        cout << "Sum of two integers: " << x + y << endl;
        return x + y;
    }
    string x;
    string y;
    string add1(string x, string y){
        string result = x + y;
        cout << "Concatenation of two strings: " << result << endl;
        return result;
    }

};
    
int main(){
    add obj1;
    obj1.add1(5, 10);
    obj1.add1("Hello ", "World");
};
