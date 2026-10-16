#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingresa un numero: ";
    cin >> numero;
    
    // Si el residuo de dividir entre 2 es 0, es par
    if (numero % 2 == 0) {
        cout << numero << " es PAR" << endl;
    } else {
        cout << numero << " es IMPAR" << endl;
    }
    
    return 0;
}
