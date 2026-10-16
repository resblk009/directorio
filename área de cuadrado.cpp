#include <iostream>
using namespace std;

int main(){
    double lado, area;
    char opcion;

    do {
        cout << "Ingresa el lado: ";
        cin >> lado;

        if(lado <= 0){
            cout << "El lado debe ser mayor a 0" << endl;
        } else {
            area = lado * lado;
            cout << "El area es: " << area << endl;
        }

        cout << "\n¿Quieres calcular otra area? (s/n): ";
        cin >> opcion;
        system("cls");
    } while(opcion == 's' || opcion == 'S');

    cout << "Programa terminado" << endl;
    return 0;
}
