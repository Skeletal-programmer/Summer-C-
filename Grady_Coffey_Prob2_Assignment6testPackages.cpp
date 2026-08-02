#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    // Create 1 object for each package type
    Package p1("John Smith", "1020 Orange St", "Lakeland",
               "FL", 33111, 10.5, 0.4);

    TwoDayPackage p2("Bob George", "21 Pine Rd", "Cambridge",
                     "MA", 44444, 10.5, 0.65, 2.0);

    OvernightPackage p3("Don Kelly", "9 Main St", "Denver",
                        "CO", 66666, 12.25, 0.7, 0.25);

    // Display package information
    p1.printPackageInfo();
    cout << endl;

    p2.printPackageInfo();
    cout << endl;

    p3.printPackageInfo();

    return 0;
}
