// Cby3
// the third exploration of an array and array processing - beating the topic to death
// this is a simplistic view of an array by array by array, and not actually practical in any real world situation
// these simplistic view is as bad as it gets
#include <iostream>
using namespace std;
int x;          // typical index or subscript variable - another common choice would be 'i'
int y;
int z;
int xevent[5][5][5];  // declare here - initialize later - don't worry you'll likely initialize often, and perhaps in different ways
// you might be tempted to write like this - but try that with 1000 by 1000
// so if you're going to use a loop - may as well - always use a loop - best practice -and practice makes perfect - and makes you faster
//int xevent[5][5][5] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};  // FORGETABOUTIT!
int main()
{
    cout << "greetings from Cby3" << endl;

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            for (z = 0; z < 5; z++)
            {
                  xevent[x][y][z] = 0;        // one assignment statement for each index - unavoidable - 5x5x5= alot
            }
        }
    }

//  so...in Cby1 we had 5 assignments, here in Cby3 we have 125 - imagine if it were 500x500x500

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            for (z = 0; z < 5; z++)
            {
                std::cout << " index " << x << " value " << xevent[x][y][z] << endl;
            }
        }
    }

    std::cin >> x;  // hold the console open, so you can see your result,  until you enter a digit

    return 0;

}
// as for the result - it's beyond ugly
