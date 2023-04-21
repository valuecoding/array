#include <iostream>
using namespace std;

int main()
{
    int hp[] = { 100,53,34,95,100,232};
    int enemy = 0;
    
    cout << "Von Welchem Gegner wollen sie die Anzahl Lebenspunkte wissen (0-5)?";
    cin >> enemy;
    if(enemy > 5 || enemy < 0)
    {
        cout << "\nDer Gegner ist nicht vorhanden.";
    }
    else
    {
        cout << "\nDer NPC " << enemy << " hat " << hp[enemy] << " " << "Lebenspunkte." << endl;
        hp[0] = 3; // Die erste Stelle wird verändert. Bei 0 zählen.
    }
    cout << "\nDer Array hp braucht " << sizeof(hp) / sizeof(hp[0]) << " Bit";
    cout << endl;
    
    // Legt ein Array an , ohne Element wert zu geben.
    
    int testarray[3];
    //setze die werte
    testarray[0] = 3;
    testarray[1] = 434;
    testarray[2] = 2;
    //
    int testarray2[3];
    
    int testarray3[100] = {0}; // Setz den Wert aller Elemente auf 0
    int testarray4[100] = {1}; // Setz den Wert aller Elemente auf 0, nur das erste auf 1
    int testarray5[3] = {0,1}; 
    
    cout << endl;
    return 0;
    
}// main ende