#include <iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
    void show(){
        cout<< "The car is a "<<year<<" "<<brand<<" "<<model<<"."<<endl;
    }
};

int main(){
    car c1("Toyota", "Innova", 2020); 
    c1.show();
    car c2("Honda", "Civic", 2021);
    c2.show();
    car c3("Ford", "Everest", 2022);
    c3.show();
    return 0;
}