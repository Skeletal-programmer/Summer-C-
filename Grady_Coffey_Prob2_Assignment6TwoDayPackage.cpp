#include "TwoDayPackage.h"

// Constructor
TwoDayPackage::TwoDayPackage(const string& name,
                             const string& address,
                             const string& city,
                             const string& state,
                             int ZIP,
                             double w,
                             double cost,
                             double fee)
    : Package(name, address, city, state, ZIP, w, cost)
{
    setFlatFee(fee);
}

// Validates flat fee
void TwoDayPackage::setFlatFee(double fee)
{
    if (fee > 0)
        flatFee = fee;
    else
    {
        cout << "Invalid flat fee. Setting fee to 0." << endl;
        flatFee = 0;
    }
}

// flat fee + shipping cost
double TwoDayPackage::calculateCost() const
{
    return Package::calculateCost() + flatFee;
}

// Display package info
void TwoDayPackage::printPackageInfo() const
{
    cout << "-------------------------------------------------------\n\n";
    cout << "Two Day Package id " << id << ":\n\n";
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << endl << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------------\n";
}
