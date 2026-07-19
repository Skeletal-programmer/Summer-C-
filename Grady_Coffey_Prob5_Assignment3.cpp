#include <iostream>
#include <string>
using namespace std;

class Stock
{
private:
    string symbol;
    string name;
    double previousClosingPrice;
    double currentPrice;

public:
    // Constructor
    Stock(string stockSymbol, string stockName)
    {
        symbol = stockSymbol;
        name = stockName;
        previousClosingPrice = 0.0;
        currentPrice = 0.0;
    }

    // Accessor functions
    string getSymbol() const
    {
        return symbol;
    }

    string getName() const
    {
        return name;
    }

    double getPreviousClosingPrice() const
    {
        return previousClosingPrice;
    }

    double getCurrentPrice() const
    {
        return currentPrice;
    }

    // Mutator functions
    void setPreviousClosingPrice(double price)
    {
        previousClosingPrice = price;
    }

    void setCurrentPrice(double price)
    {
        currentPrice = price;
    }

    // Returns percentage change
    double getChangePercent() const
    {
        return (currentPrice - previousClosingPrice) / previousClosingPrice;
    }
};

int main()
{
    // Create Stock object
    Stock stock("NVDA", "NVIDIA Corp.");

    // Sets the prices
    stock.setPreviousClosingPrice(27.5);
    stock.setCurrentPrice(27.6);

    // Output results
    cout << "Previous Closing Price: " << stock.getPreviousClosingPrice() << endl;
    cout << "Current Price: " << stock.getCurrentPrice() << endl;
    cout << "Percentage Change: " << stock.getChangePercent() << endl;

    return 0;
}
