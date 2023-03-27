#include <iostream> 

#include <string> 

using namespace std; 

int main() { 

    int num; 

    cout << "Ingrese un numero no negativo: "; 

    cin >> num; 

    while (num < 0) { // manejo de números negativos 

        cout << "El numero ingresado no es valido. Ingrese un numero no negativo: "; 

        cin >> num; 

    } 

    if (num > 12) { // manejo de números grandes 

        cout << "El resultado se demorara en ser calculado. Intente con un numero mas pequeno." << endl; 

        return 0; 

    } 

    int factorial = 1; 

    for (int i = 1; i <= num; i++) { 

        factorial *= i; 

    } 

    cout << "El factorial de " << num << " es: " << factorial << endl; 

 

    return 0; 

}
