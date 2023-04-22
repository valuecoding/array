#include <iostream>
using namespace std;

int average(int first, int second); // Prototyp

int main()
{
    cout << average(10,300) << endl;
    cout << average(25,355) << endl;
    
}// main end

int average(int first, int second) // Definition

{
    //Zählt beide Zahlen zusammen und dividiert sie durch 2:
    int average = (first + second) / 2;
    //Ergebnis der Variable wird ausgegeben:
    return average;
    
    
}
