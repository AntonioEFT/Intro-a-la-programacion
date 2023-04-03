#include <iostream> 

using namespace std; 

 

int main() { 

    int x, y, z, sum; 
 

    cout << "Introduzca dos enteros: "; 

    cin >> x >> y; 

    cout << "Introduzca la suma: "; 

    cin >> sum; 



    z = x + y; 

    if (sum != z) { 

        

        cout << "Error. The sum of " << x << " and " << y << " is " << z << endl; 

    } 

 
    return 0; 

}











