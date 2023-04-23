#include <iostream>
#include <string>

using namespace std;


void Vorname();
void Nachname();
int alter();
int Ergebnis();
string a;
string b;
int c;
int zahl1;
int zahl2;
int summe;
void Rechnung();

int main()
{

    Vorname();
    Nachname();
    alter();
    Rechnung();
    Ergebnis();
    cout << "\n Das Programm war erfoglreich!";



}

void Nachname()

{
    cout << "Gebe mir deinen ersten Buchstaben vom Nachnamen:\n";
    cin >> b;
}

int alter()
{

    cout << "Nenne mir nun dein Alter:\n";
    cin >> c;
    if(c>0)
    cout << "Das war richtig!\n";
    else
    cout << "Das war falsch nochmal neustarten!!";





}

int Ergebnis()
{
    summe = zahl1 + zahl2;
    cout << "1. Buchstabe: \n" << a << endl;
    cout << "2. Buchstabe: \n" << b << endl;
    cout << "Alter: \n" << c << endl;
    cout << "Summe:\n" << summe << endl;


}



void Rechnung()

{
    cout << "Gebe mir die erste Zahl wir werden addieren: \n";
    cin >> zahl1;
    cout << "Jetzt die 2. Zahl bitte \n";
    cin >> zahl2;
}

void Vorname()

{
    cout << "Gebe mir deinen ersten Buchstaben vom Vornamen:\n";
    cin >> a;
}




