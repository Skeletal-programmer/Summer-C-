#include <iostream>
#include <string>

using namespace std;

class Attendance
{
public:
    // Constructor
    Attendance(const string& atd)
    {
        attendance = atd;
    }

    // Return true if attendance passes the rules
    bool checkAttendance()
    {
        return !isAbsent() && !isLate();
    }

private:
    string attendance;

    // Is true if absent 2 or more days
    bool isAbsent()
    {
        int count = 0;

        for (char ch : attendance)
        {
            if (ch == 'A')
                count++;
        }

        return count >= 2;
    }

    // Returns true if late 3 or more days in a row
    bool isLate()
    {
        return attendance.find("LLL") != string::npos;
    }
};

int main()
{
    Attendance atd1("PPALLP");
    Attendance atd2("PPALLL");

    (atd1.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;

    (atd2.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;

    return 0;
}
