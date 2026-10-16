#include <iostream>
using namespace std;

int main(){
	float base, altura, area;
	
	cout << "=== AREA DE UN TRIANGULO ===" << endl;
	cout << "ingresa la base: ";
	cin >> base;
	
	cout << "ingresa la altura: ";
	cin >> altura;
	
	area = (base*altura) / 2;
	cout << "El area del triangulo es: " << area << endl;
	
	system ("pause");
	return 0;
}
