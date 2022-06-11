#include <iostream>
using namespace std;

float calcularArea(int B, int b, int h);

int main()
{
	int base_mayor, base_menor, altura;
	cout << "Calcular el area de un trapecio" << endl;
	cout << "Digite la base mayor: ";
	cin >> base_mayor;
	cout << "Digite la base menor: ";
	cin >> base_menor;
	cout << "Digite la altura: ";
	cin >> altura;
	cout << "\n------------------------------" << endl;
	cout << "El area de trapecio es: " << calcularArea(base_mayor, base_menor, altura) << endl;
	cout << "------------------------------" << endl;
	return 0;
}

float calcularArea(int B, int b, int h)
{
	int area;
	area = ((B + b) / 2) * h;
	return area;
}