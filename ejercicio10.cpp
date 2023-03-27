#include <iostream> 

using namespace std; 

int main() { 

    int bill; 

    int sum = 0; 

    cout << "Ingrese los ingresos (ingrese 0 para terminar):" << endl; 

    do { 

        cin >> bill; 

        // Esta construcción del if y continue nos permite ignorar casos innecesarios 

        if (bill <= 0) { 

            continue; 

        } 

        cout << "Ingreso: " << bill << endl; 

        sum += bill; 

        // La señal del final del programa será una cuenta de cero 

    } while (bill != 0); 

    cout << "Ingreso total: " << sum << endl; 

    return 0; 

} 
