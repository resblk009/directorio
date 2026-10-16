#include <iostream>
using namespace std;
#define PI 3.1416

int main(){
    double radio, area;
    char opcion;

    do {
        cout << "Ingresa el radio: ";
        cin >> radio;

        if(radio <= 0){
            cout << "El radio debe ser mayor a 0" << endl;
        } else {
            area = PI * radio * radio;
            cout << "El area del circulo es: " << area << endl;
        }

        cout << "\n¿Quieres calcular otra area? (s/n): ";
        cin >> opcion;
        system("cls");
    } while(opcion == 's' || opcion == 'S');

    return 0;
}
