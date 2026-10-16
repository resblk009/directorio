#include <iostream>
using namespace std;

int main(){
    int num, i;
    bool esPrimo;
    char opcion;

    do {
        esPrimo = true;
        cout << "Ingresa un numero: ";
        cin >> num;

        if(num <= 1){
            esPrimo = false;
        } else {
            i = 2;
            do {
                if(num % i == 0){
                    esPrimo = false;
                    break;
                }
                i++;
            } while(i < num);
        }

        if(esPrimo) cout << "Es primo" << endl;
        else cout << "No es primo" << endl;

        cout << "\n¿Otro? (s/n): ";
        cin >> opcion;
        system("cls");
    } while(opcion == 's' || opcion == 'S');

    return 0;
}
