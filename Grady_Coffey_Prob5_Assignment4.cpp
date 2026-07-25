#include <iostream>
#include <ctime>
using namespace std;

class MyDate
{
private:
    int year;
    int month;
    int day;

public:
    // No-arg constructor (current date)
    MyDate()
    {
        time_t currentTime = time(0);
        tm* localTime = localtime(&currentTime);

        year = localTime->tm_year + 1900;
        month = localTime->tm_mon;
        day = localTime->tm_mday;
    }

    // Constructor uses elapsed time (seconds post specificully Jan. 1, 1970)
    MyDate(long elapsedTime)
    {
        setDate(elapsedTime);
    }

    // Constructor with specific year, month, day
    MyDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }

    // Get functions
    int getYear() const
    {
        return year;
    }

    int getMonth() const
    {
        return month;
    }

    int getDay() const
    {
        return day;
    }

    // Set functions
    void setYear(int y)
    {
        year = y;
    }

    void setMonth(int m)
    {
        month = m;
    }

    void setDay(int d)
    {
        day = d;
    }

    // Sets date using elapsed time
    void setDate(long elapsedTime)
    {
        time_t timeValue = elapsedTime;
        tm* date = localtime(&timeValue);

        year = date->tm_year + 1900;
        month = date->tm_mon;
        day = date->tm_mday;
    }
};

int main()
{
    //Outputs using calls to get year/month/day
    MyDate date1;
    MyDate date2(3435555513);

    cout << "Current Date:" << endl;
    cout << "Year: " << date1.getYear() << endl;
    cout << "Month: " << date1.getMonth() << endl;
    cout << "Day: " << date1.getDay() << endl;

    cout << endl;

    cout << "Elapsed Time Date:" << endl;
    cout << "Year: " << date2.getYear() << endl;
    cout << "Month: " << date2.getMonth() << endl;
    cout << "Day: " << date2.getDay() << endl;

    return 0;
}
