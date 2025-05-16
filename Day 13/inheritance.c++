#include <iostream>
using namespace std;  // Removed 'using namespace std;' to avoid namespace pollution

// Parent class
class Vehicle {
protected:
    std::string color;
    std::string brand;
    double mileage;
public:
    Vehicle(string c, string b, double m) : color(c), brand(b), mileage(m) {}
    void displayDetails() {
        cout << "Brand: " << brand << ", Color: " << color << ", Mileage: " << mileage << endl;
    }
};

// Derived class: TwoWheeler
class TwoWheeler : public Vehicle {
public:
    TwoWheeler(string c, string b, double m) : Vehicle(c, b, m) {}
    void showType() {
        std::cout << "Type: Two Wheeler" << std::endl;
    }
};

// Derived class: FourWheeler
class FourWheeler : public Vehicle {
public:
    FourWheeler(string c, string b, double m) : Vehicle(c, b, m) {}
    void showType() {
        std::cout << "Type: Four Wheeler" << std::endl;
    }
};

// Example usage
int main() {
    TwoWheeler bike("Red", "Honda", 55.5);
    FourWheeler car("Blue", "Toyota", 18.2);

    bike.showType();
    bike.displayDetails();

    car.showType();
    car.displayDetails();

    return 0;
}