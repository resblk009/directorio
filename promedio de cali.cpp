#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double cal1, cal2, cal3, promedio;
    char opcion;

    do {
        cout << "Ingresa 3 calificaciones: ";
        cin >> cal1 >> cal2 >> cal3;

        promedio = (cal1 + cal2 + cal3) / 3;

        cout << fixed << setprecision(2);
        cout << "Promedio: " << promedio << endl;

        cout << "\n¿Calcular otro promedio? (s/n): ";
        cin >> opcion;
        system("cls");
    } while(opcion == 's' || opcion == 'S');

    return 0;
}
