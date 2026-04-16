#include <iostream>

class Vehicle {
public:
    virtual std::string getType() = 0;
};

class Car : public Vehicle {
public:
    std::string getType() override {
        return "Car";
    }
};

class Bike : public Vehicle {
public:
    std::string getType() override {
        return "Bike";
    }
};

class Truck : public Vehicle {
public:
    std::string getType() override {
        return "Truck";
    }
};

class VehicleFactory {
public:
    virtual Vehicle* createVehicle() = 0;
};

class CarFactory : public VehicleFactory {
    // Write your code here
    Vehicle *createVehicle() override{
	Car *vehicle = new Car();
	return vehicle;
    }
};

class BikeFactory : public VehicleFactory {
    // Write your code here
    Vehicle *createVehicle() override{
	Bike *bicycle = new Bike();
	return bicycle;
    }
};

class TruckFactory : public VehicleFactory {
    // Write your code here
    Vehicle * createVehicle() override{
	Truck *silverado = new Truck();
	return silverado;
    }
};
