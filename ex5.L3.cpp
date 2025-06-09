#include <iostream> 
using namespace std;

int main()
{
	int numero;
	
	do {
		cout << " Digite um numero inteiro positivo: ";
		cin >> numero;
		
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Entrada invalida, digite apenas numeros inteiros.\n";
			numero = -1;
		}
		else if (numero <= 0) {
			cout << " Valor invalido, o numero precisa ser maior que zero.\n";
		}
	} while (numero <= 0);
	
	cout << "\nTabuada do " << numero << "\n";
	
	for(int i = 1; i <= 10; i++) {
		cout << numero << " x " << i << " = " << (numero * i) << "\n";
		
	}
	return 0;
}
