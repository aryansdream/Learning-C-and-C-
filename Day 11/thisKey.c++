#include <iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    car(string brand, string model, int year){
        this->brand = brand;
        this->model = model;
        this->year = year;
    }
};
int main(){
    car c1("Toyota", "Innova", 2020); 
    cout<< "The car is a "<<c1.year<<" "<<c1.brand<<" "<<c1.model<<"."<<endl;
    car c2("Honda", "Civic", 2021);
    cout<< "The car is a "<<c2.year<<" "<<c2.brand<<" "<<c2.model<<"."<<endl;
    car c3("Ford", "Everest", 2022);
    cout<< "The car is a "<<c3.year<<" "<<c3.brand<<" "<<c3.model<<"."<<endl;
    return 0;
}