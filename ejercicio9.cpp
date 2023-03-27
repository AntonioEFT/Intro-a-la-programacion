#include <iostream> 

using namespace std; 

 

int main() { 

    int pastel = 1; // asumimos que hay pastel al inicio 

    int contador = 0; // contador de visitas al refrigerador 

     

    while (contador < 10) { 

        if (pastel == 1) { 

            cout << "Om-nom-nom :P" << endl; 

            contador++; 

        } else { 

            cout << "Sin pastel :(" << endl; 

            break; 

        } 

         

        // Pedimos al usuario que ingrese si hay o no pastel 

        cout << "Hay pastel? (1: si, 0: no) "; 

        cin >> pastel; 

        cin.ignore(); // limpiar el buffer de entrada 

    } 

     

    return 0; 

} 
