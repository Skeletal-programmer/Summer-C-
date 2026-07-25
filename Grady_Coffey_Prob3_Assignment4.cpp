#include <iostream>
using namespace std;

class MySet
{
private:
    unsigned int range;
    unsigned int size;
    bool* set;

public:
    // Constructor
    MySet(unsigned int r)
    {
        range = r;
        size = 0;

        set = new bool[range + 1];

        for (unsigned int i = 0; i <= range; i++)
        {
            set[i] = false;
        }
    }

    // Copy Constructor
    MySet(const MySet& other)
    {
        range = other.range;
        size = other.size;

        set = new bool[range + 1];

        for (unsigned int i = 0; i <= range; i++)
        {
            set[i] = other.set[i];
        }
    }

    // Destructor
    ~MySet()
    {
        delete[] set;
    }

    // Insert an element
    void insertElement(int k)
    {
        if (k < 0 || k > (int)range)
        {
            cout << "Invalid insert attempted for the number "
                 << k << "!" << endl;
            return;
        }

        if (!set[k])
        {
            set[k] = true;
            size++;
        }
    }

    // Delete element
    void deleteElement(int m)
    {
        if (m < 0 || m > (int)range)
        {
            cout << "Invalid delete attempted for the number "
                 << m << "!" << endl;
            return;
        }

        if (set[m])
        {
            set[m] = false;
            size--;
        }
    }

    // Print set
    void printSet() const
    {
        if (size == 0)
        {
            cout << "{ --- }" << endl;
            return;
        }

        cout << "{ ";

        bool first = true;

        for (unsigned int i = 0; i <= range; i++)
        {
            if (set[i])
            {
                if (!first)
                {
                    cout << ", ";
                }

                cout << i;
                first = false;
            }
        }

        cout << " }" << endl;
    }

    // Compare two sets of num
    bool isEqualTo(const MySet& other) const
    {
        if (range != other.range)
        {
            return false;
        }

        for (unsigned int i = 0; i <= range; i++)
        {
            if (set[i] != other.set[i])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    //Inserts the numbers
    MySet s(20);
    s.insertElement(13);
    s.insertElement(7);
    s.insertElement(20);
    s.insertElement(21);
    
    //Output the numbers and delete invalid
    s.printSet();
    s.deleteElement(22);
    s.deleteElement(13);
    s.printSet();

    MySet s2(100);
    s2.printSet();
    MySet s3(s);

    cout << "s3.isEqualTo(s) = " << s3.isEqualTo(s) << endl;

    return 0;
}
