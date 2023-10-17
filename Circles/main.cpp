/*
   Start shape drawing file
   */

#include <iostream>
#include "Framework.h"

// Variables with global scope - do not rename them, feel free to change values though

// Screen dimensions
int gScreenWidth{800};
int gScreenHeight{600};

// Delay to slow things down
int gTimeDelayMS{10};

using namespace std;

int main()
{
    cout << "Hello circles" << endl;
    srand(time(NULL));

    int x{ 100 };
    int y{ 200 };
    int radius{ 20 };
    int xDir{ 5 };
    int yDir{ 5 };

    unsigned char r{ 255 };
    unsigned char g{ 255 };
    unsigned char b{ 0 };
    unsigned char a{ 255 };

    while(UpdateFramework())
    {
        x += xDir;
        y += yDir;
        if (x >= gScreenWidth - (2 * radius) || x <= 0)
        {
            xDir = -xDir;
        }
        if (y >= gScreenHeight - (2 * radius) || y <= 0)
        {
            yDir = -yDir;
        }
        ChangeColour(r, g, b);
        // Draws a circle at 100,200 with radius 20
        DrawCircle(x, y, radius);

    }


    cout << "Bye bye" << endl;

    return 0;
}
