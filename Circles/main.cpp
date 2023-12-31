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

    unsigned char r{ 255 };
    unsigned char g{ 255 };
    unsigned char b{ 0 };
    unsigned char a{ 255 };

    while(UpdateFramework())
    {
        ChangeColour(r, g, b);
        DrawCircle(x, y, radius);

    }


    cout << "Bye bye" << endl;

    return 0;
}
