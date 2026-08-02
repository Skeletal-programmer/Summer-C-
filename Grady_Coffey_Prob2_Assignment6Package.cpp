#include "Package.h"

// Initialize static packege ID
int Package::ID = 0;

// Constructor
Package::Package(const string& name,
                 const string& address,
                 const string& city,
                 const string& state,
                 int ZIP,
                 double weight,
                 double cost)
{
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
    this->ZIP = ZIP;

    // Validate shipping values
    setWeight(weight);
    setCostPerOunce(cost);

    // Assigns the unique package ID
    id = ++ID;
}

void Package::setWeight(double weight)
{
    if (weight > 0)
        this->weight = weight;
    else
    {
        cout << "Invalid weight. Setting weight to 0." << endl;
        this->weight = 0;
    }
}

void Package::setCostPerOunce(double cost)
{
    if (cost > 0)
        costPerOunce = cost;
    else
    {
        cout << "Invalid cost per ounce. Setting cost to 0." << endl;
        costPerOunce = 0;
    }
}

// Standard shipping cost
double Package::calculateCost() const
{
    return weight * costPerOunce;
}

// Print package details
void Package::printPackageInfo() const
{
    cout << "-------------------------------------------------------\n\n";
    cout << "Package id " << id << ":\n\n";
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << endl << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------------\n";
}
