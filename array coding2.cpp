#include <iostream>
using namespace std;
/* mehrdimensionale array 21.4.2023 */


int main() // [Lebenspunkte],[ID],[Schaden]
{
    int array[6] [3] =
    {
        {100,   0,  35},
        {53,    1,  668},
        {34,    2,  575},
        {98,    3,  287},
        {100,   4,  530},
        {232,   5,  457},
        
        
    };//array end
    
    cout << "Der letze Gegner macht " << array[5] [2] <<" Schaden" << endl;
    cout << "Der erste Gegner hat " << array[0] [0] << " Leben." << endl;
    cout << "Der zweite Gegner hat " << array[1] [0] << " Leben und macht" << " " << array [1] [2] << " Schaden." <<endl;
    
    
    
    
}// main ende