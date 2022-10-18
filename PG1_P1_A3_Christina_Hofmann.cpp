#include <iostream>

using namespace std;

int main(){
    
    int width = 0;
     while(width <= 0) {
        cout << "Breite des Schuhkartons: "; 
        cin >> width;
        if(width <= 0){
            cout << "Diese Eingabe ist nicht zulässig! Versuchen Sie es erneut." << endl;
        }
    } 
    
    int length = 0;
    while(length <= 0) {
        cout << "Länge des Schuhkartons: "; 
        cin >> length;
        if(length <= 0){
            cout << "Diese Eingabe ist nicht zulässig! Versuchen Sie es erneut." << endl;
        }
    }
    
    int height = 0;
    while(height <= 0) {
        cout << "Höhe des Schuhkartons: "; 
        cin >> height;
        if(height <= 0){
            cout << "Diese Eingabe ist nicht zulässig! Versuchen Sie es erneut." << endl;
        }
    }
    
    cout << "Das Volumen beträgt: " << width*length*height << "cm^3" << endl;
    cout << "Die Oberfläche beträgt: " << width*height*2+width*length*2+height*length*2 << "cm^2" << endl;
    
    return 0;
}