#include <iostream>
using namespace std;
class animal{
    public:
    string name;
    int age;
    string species;
    void eat(){
        cout << name << " is eating." << endl;
    }
    void sleep(){
        cout << name << " is sleeping." << endl;
    }
    void makeSound(){
        cout << name << " is making a sound." << endl;
    }
  
};
int main(){
    animal a;
    a.name = "satnam";
    cout << a.name << endl;
    a.age = 5;
    cout << a.age << endl;
    a.species = "Mammal";
    cout << a.species << endl;
    a.eat();
    a.sleep();
    a.makeSound();
    return 0;
}
// This code defines a class named "animal" with three public member variables: name, age, and species.