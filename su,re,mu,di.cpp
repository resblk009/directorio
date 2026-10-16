#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    float suma, resta, multiplicacion, division; 
    
    cout << "ingresa el primer numero: ";
    cin >> num1;
    cout << "ingresa el segundo numero: ";
    cin >> num2;
    
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    
    cout << "\n --- RESULTADO --- " << endl;
    cout << "Suma: " << num1 << "+" << num2 << "=" << suma << endl;
    cout << "Resta: " << num1 << "-" << num2 << "=" << resta << endl;
    cout << "Multiplicacion: " << num1 << "*" << num2 << "=" << multiplicacion << endl;
    cout << "Division: " << num1 << "/" << num2 << "=" << division << endl;
    
    system("pause");
    return 0;
}
