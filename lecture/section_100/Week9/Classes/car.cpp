#include <iostream>

using namespace std;

class Car {
    private:
        string _make;
        string _model;
        int _year;
        double _price;

    public:
        // accessor functions
        string getMake() {
            return _make;
        }
        string getModel() {
            return _model;
        }
        int getYear() {
            return _year;
        }
        double getPrice() {
            return _price;
        }

        // setter functions
        void setMake(string make) {
            _make = make;
        }
        void setModel(string model) {
            _model = model;
        }
        void setYear(int year) {
            _year = year;
        }
        void setPrice(double price) {
            _price = price;
        }

        // other member functions
        void start();
        void drive();
        void stop();
};

void Car::start() {
    cout << "Starting the car" << endl;
}

void Car::drive() {
    cout << "Driving the car" << endl;
}

void Car::stop() {
    cout << "Stopping the car" << endl;
}

int main() {
    Car my_car;
    my_car.setMake("Toyota");
    my_car.setModel("Camry");
    my_car.setYear(2018);
    my_car.setPrice(20000.0);

    Car dads_car;
    dads_car.setMake("Tesla");
    dads_car.setModel("Model S");
    dads_car.setYear(2023);
    dads_car.setPrice(70000.0);
    
    return 0;
}