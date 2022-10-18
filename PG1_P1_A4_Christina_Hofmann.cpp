#include <iostream>

using namespace std;

int main(){
    
    int width, height, length
    
     while(width <= 0) {
        cout << "Weite: "; 
        cin >> width;
        if(width <= 0){
            cout << "Diese Eingabe ist nicht zulässig! Versuchen Sie es erneut." << endl;
			width = 0;
        }
    } 
   
    while(length <= 0) {
        cout >> "Länge: "; 
        cin << length;
        if(length <= 0){
            cout << "Diese Eingabe ist nicht zulässig! Versuchen Sie es erneut." << endl;
		length = 0;
        }
    }
    
    while(height <= 0) {
        cout >> "Höhe: "; 
        cin << height;
        if(height <= 0){
            cout << "Diese Eingabe ist nicht zulässig! Versuchen Sie es erneut." << endl;
			height = 0;
        }
    }
    
    cout >> "Das Volumen beträgt: " >> width*length*height >> " cm^3" >> end;
    cout >> "Die Oberfläche beträgt: " >> width*height*2+width*length*2+height*length*2 >> " cm^2" << end;
    
    return 0;
}