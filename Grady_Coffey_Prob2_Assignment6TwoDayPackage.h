#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

// Derivd class for two-day shipping
class TwoDayPackage : public Package
{
private:
    //  Fee for two-day deliverys
    double flatFee;

public:
    TwoDayPackage(const string& name,
                  const string& address,
                  const string& city,
                  const string& state,
                  int ZIP,
                  double w,
                  double cost,
                  double fee);

    void setFlatFee(double fee);

    // Overrides the base class functions
    double calculateCost() const override;
    void printPackageInfo() const override;
};

#endif
