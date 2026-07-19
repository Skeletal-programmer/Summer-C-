#include <iostream>
#include <string>
using namespace std;

class Spaceship
{
private:
    int x;
    int y;
    string position;

public:
    // No-arg constructor
    Spaceship()
    {
        x = 0;
        y = 0;
        position = "{x: 0, y: 0, direction: 'up'}";
    }

    // Constructor using flight path
    Spaceship(const string& path)
    {
        x = 0;
        y = 0;

        int direction = 0;

        for (char move : path)
        {
            if (move == 'R')
            {
                direction = (direction + 1) % 4;
            }
            else if (move == 'L')
            {
                direction = (direction + 3) % 4; // turn left
            }
            else if (move == 'A')
            {
                switch (direction)
                {
                case 0: // up
                    y--;
                    break;
                case 1: // right
                    x++;
                    break;
                case 2: // down
                    y++;
                    break;
                case 3: // left
                    x--;
                    break;
                }
            }
        }

        string dir;

        switch (direction)
        {
        case 0:
            dir = "up";
            break;
        case 1:
            dir = "right";
            break;
        case 2:
            dir = "down";
            break;
        case 3:
            dir = "left";
            break;
        }

        position = "{x: " + to_string(x) +
                   ", y: " + to_string(y) +
                   ", direction: '" + dir + "'}";
    }

    // Accessor
    string getPosition() const
    {
        return position;
    }
};

int main()
{
    Spaceship astrochuckler;
    cout << astrochuckler.getPosition() << endl;

    Spaceship lunacycle("RAALALL");
    cout << lunacycle.getPosition() << endl;

    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    cout << quirkonaut.getPosition() << endl;

    Spaceship zanyverse("");
    cout << zanyverse.getPosition() << endl;

    Spaceship cosmocomedy("LAAA");
    cout << cosmocomedy.getPosition() << endl;

    return 0;
}
