//#include <idream> (nicht vorhandene Bibliothek)
#include <iostream>

using namespace std;

int main(void)
{
 cout << "los" << " geht's!" << endl; //Falsche Formatierung; "<<" vergessen und ";" an der falschen Stelle
 auto /*i*/i=16; //Doppeltes i; vermutlich Tippfehler
 while (i<=63) {
    int r = i%4; //"Int" muss kleingeschrieben werden, damit der Datentyp erkannt wird (ansonsten Verwechslung mit der Klasse "Int")
    if (r == 0) { //nach einem if-Statement muss eine geschweifte Klammer geöffnet werden
    cout << endl;
    cout << hex << i << " ";
    cout << dec << i << " ";
    cout << oct << i<< " "; //nicht relevante, aber übersichtlichere Schreibweise
    }
 i = i + 1;
} //Die while-Schleife wurde mit einer geschwungenen Klammer geöffnet, somit muss sie ebenso mit einer geschwungenen Klammer geschlossen werden
 return 0;
}
//Das Programm gibt von 16 bis einschließlich 60 alle Hexadezimal, Dezimal und Octal Form der jeweiligen Zahl aus. 