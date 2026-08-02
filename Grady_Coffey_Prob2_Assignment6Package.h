#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

// Base class represanting a package
class Package
{
protected:
    // Recypient info
    string name;
    string address;
    string city;
    string state;
    int ZIP;

    // Shipping info
    double weight;
    double costPerOunce;

    // Unique packge ID
    int id;
    static int ID;

public:
    // Constructor
    Package(const string& name,
            const string& address,
            const string& city,
            const string& state,
            int ZIP,
            double weight,
            double cost);

    // Mutator functions
    void setWeight(double weight);
    void setCostPerOunce(double cost);

    // Calc shipping cost
    virtual double calculateCost() const;

    // Displays the package info
    virtual void printPackageInfo() const;

    virtual ~Package() {}
};

#endif
