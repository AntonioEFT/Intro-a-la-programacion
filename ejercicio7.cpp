#include <iostream> 

#include <string> 

 

using namespace std; 

 

int main() { 

    string line; 

    getline(cin, line); 

 

    int index = 0; 

    for (int i = 0; i < line.length(); i++) { 

        if (line[i] == ' ') { 
            cout << i-1 << endl; 

        } 

        else { 

            index = i; 

        } 

    } 

 

 

    cout << index << endl; 

 

    return 0; 

}
