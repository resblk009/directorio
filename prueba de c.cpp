#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	char continuar;
	
	do{
		cout << "ingresa tres numeros separados por espacio: ";
		cin >> num1 >> num2 >> num3;
	
		if(num2 == num1 + 1 && num3 == num1 + 2) {
			cout << "si son consecutivos" << endl;
	} else {
		cout << "no son consecutivos" << endl;
	}
	
	cout << "probar otros tres? (s/n): ";
	cin >> continuar;
	
	} while (continuar == 's' || continuar == 'S');
	
	return 0;
	}
