#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    char opcion;

    do {
        cout << "Ingresa 3 numeros: ";
        cin >> a >> b >> c;

        if(a > b && a > c){
            cout << "El mayor es: " << a << endl;
        } else if(b > c){
            cout << "El mayor es: " << b << endl;
        } else {
            cout << "El mayor es: " << c << endl;
        }

        cout << "\n¿Quieres comparar otros 3 numeros? (s/n): ";
        cin >> opcion;
		system("cls");
    } while(opcion == 's' || opcion == 'S');

    cout << "Programa terminado" << endl;
    return 0;
}
