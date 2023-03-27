#include <iostream> 

using namespace std; 

 

int main() { 

    int x, y, z, sum; 

 

    // Pedimos al usuario que introduzca los dos términos y la suma 

    cout << "Introduzca dos enteros: "; 

    cin >> x >> y; 

    cout << "Introduzca la suma: "; 

    cin >> sum; 

 

    // Comprobamos si la suma es correcta 

    z = x + y; 

    if (sum != z) { 

        // Si la suma es incorrecta, mostramos un mensaje de error 

        cout << "Error. The sum of " << x << " and " << y << " is " << z << endl; 

    } 

 

    return 0; 

}











