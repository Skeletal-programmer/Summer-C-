#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

// Derived class for overnight shipping
class OvernightPackage : public Package
{
private:
    // Extra charge based on the per ounce
    double overnightFeePerOunce;

public:
    OvernightPackage(const string& name,
                     const string& address,
                     const string& city,
                     const string& state,
                     int ZIP,
                     double w,
                     double cost,
                     double fee);

    void setOvernightFeePerOunce(double fee);

    // Override base class functions
    double calculateCost() const override;
    void printPackageInfo() const override;
};

#endif
