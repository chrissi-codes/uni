#include <iostream>

using namespace std;

int main()
{
    int number = 9; //Die zu überprüfende Zahl wird initialisiert
    cout << number << " = "; //Gibt den Wert der oben deklarierten Variabel sowie ein Gleichzeichen aus
    cout << number % 2; //Gibt den Rest der Division mit zwei aus (0 oder 1; n*2^1)
    number = number / 2; //halbiert den Wert der Variabel "number"
    cout << number % 2; //Gibt den Rest der Division mit zwei aus (0 oder 1; n*2^2)
    number = number / 2; //Halbiert den Wert der Variabel "number"
    cout << number % 2; //Gibt den Rest der Division mit zwei aus (0 oder 1; n*2^3)
    number = number / 2; //Halbiert den Wert der Variabel "number"
    cout << number % 2; //Gibt den Rest der Division mit zwei aus (0 oder 1; n*2^4)
    number = number / 2; //Halbiert den Wert der Variabel "number", keine relevanz für das gegebene Beispiel, da im folgenden Code nicht mehr auf die Variabel zugegriffen wird
    cout << endl; //Erzeugt einen Zeilenumbruch in der Ausgabe
    return 0;
}