#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int zahl[4];
    int asc, desc;
    int kaprekar = 0, temp = 0, old = 0;
    
    bool repeat = true;
    do{
        cout << "Was ist die erste Ziffer ihrer Zahl? "; cin >> zahl[0];
        cout << "Was ist die zweite Ziffer ihrer Zahl? "; cin >> zahl[1];
        cout << "Was ist die dritte Ziffer ihrer Zahl? "; cin >> zahl[2];
        cout << "Was ist die vierte Ziffer ihrer Zahl? "; cin >> zahl[3]; 
        
        if((zahl[0]>=0&&zahl[0]<=9&&zahl[1]>=0&&zahl[1]<=9&&zahl[2]>=0&&zahl[2]<=9&&zahl[3]>=0&&zahl[3]<=9)&& !(zahl[0]==zahl[1]==zahl[2]==zahl[3])){
            repeat = false;
        }else{
            cout << "Achten Sie darauf, dass Sie pro Eingabe nur jeweils eine Ziffer zwischen 0 und 9 eingeben und diese nicht alle identisch sind." << endl << endl;
        }
    }while(repeat);
    int gesamt = zahl[0]*1000 + zahl[1]*100 + zahl[2]*10 +zahl[3]*1;
    cout << "Ihre Zahl lautet: " << gesamt << endl;
    
    do{
        kaprekar = old;
        
        sort(zahl, zahl+4); //Der Array wird aufsteigend sortiert
    
        asc = zahl[0]*1000+ zahl[1]*100 + zahl[2]*10 + zahl[3];
        desc = zahl[0] + zahl[1]*10 + zahl[2]*100 + zahl[3]*1000;

        temp = desc - asc;
        cout << " -> " << temp << endl;
        old = temp;
        
        for(int i = 3; i >= 0; i--){
            zahl[i] = temp % 10;
            temp /= 10;
        }
        
    }while(kaprekar != old);
    cout << "Die Kapreka Konstante lautet: " << kaprekar;
    return 0;
}