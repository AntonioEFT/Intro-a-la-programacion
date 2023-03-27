#include <iostream> 

using namespace std; 

 

int main() { 

    double size1, size2; 

    cout << "Ingrese el tamaño de la primera mitad: "; 

    cin >> size1; 

    cout << "Ingrese el tamaño de la segunda mitad: "; 

    cin >> size2; 

 

    if (size1 == size2) { 

        cout << "La naranja se divide en dos partes iguales." << endl; 

    } else if (size1 > size2) { 

        double diff = size1 - size2; 

        cout << "Cortar " << diff << " de la primera parte." << endl; 

    } else { 

        double diff = size2 - size1; 

        cout << "Cortar " << diff << " de la segunda parte." << endl; 

    } 

 

    return 0; 

} 
