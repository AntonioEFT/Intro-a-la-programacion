#include <iostream>
#include <string>

using namespace std;

int main() {
    string color;
    int casa;

    cout << "Ingrese el color de la casa donde se vio por �ltima vez a Fluffy: ";
    cin >> color;

    if (color == "rojo") {
        casa = 1;
    } else if (color == "verde") {
        casa = 2;
    } else if (color == "azul") {
        casa = 3;
    } else {
        cout << "Color no v�lido. Ingrese uno de los siguientes colores: rojo, verde, azul." << endl;
        return 0;
    }

    cout << "Necesita hablar con la casa n�mero " << casa << " sobre su mascota, Fluffy." << endl;

    return 0;
}

