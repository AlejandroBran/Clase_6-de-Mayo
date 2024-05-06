#include <iostream>

using namespace std;

int main (){

    char Letras;
    cout << "Ingrese una letra:\n";
    cin >> Letras;

    switch (Letras){

        case 'R':
        cout << "Es Rojo.\n";
        break;

        case 'Y':
        cout << "Es Amarillo.\n";
        break;

        case 'B':
        cout << "Es Azul.\n";
        break;
        
        case 'W':
        cout << "Es Blanco.\n";
        break;

        case 'K':
        cout << "Es Negro.\n";
        break;

        case 'C':
        cout << "Es Cian.\n";
        break;

        case 'G':
        cout << "Es Verde.\n";
        break;

        default:
        cout << "Error.\n";



    }


return 0;
}
