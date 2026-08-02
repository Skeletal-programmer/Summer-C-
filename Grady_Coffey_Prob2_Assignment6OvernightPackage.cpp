#include "OvernightPackage.h"

// Constructor
OvernightPackage::OvernightPackage(const string& name,
                                   const string& address,
                                   const string& city,
                                   const string& state,
                                   int ZIP,
                                   double w,
                                   double cost,
                                   double fee)
    : Package(name, address, city, state, ZIP, w, cost)
{
    setOvernightFeePerOunce(fee);
}

// Validate overnight fee
void OvernightPackage::setOvernightFeePerOunce(double fee)
{
    if (fee > 0)
        overnightFeePerOunce = fee;
    else
    {
        cout << "Invalid overnight fee. Setting fee to 0." << endl;
        overnightFeePerOunce = 0;
    }
}

// Calculate overnight shipping cost
double OvernightPackage::calculateCost() const
{
    return weight * (costPerOunce + overnightFeePerOunce);
}

// Display overnight package information
void OvernightPackage::printPackageInfo() const
{
    cout << "-------------------------------------------------------\n\n";
    cout << "Overnight Package id " << id << ":\n\n";
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << endl << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------------\n";
}
