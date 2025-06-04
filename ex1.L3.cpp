#include <iostream>
using namespace std;

int main()
{
	int numero;
	
	do{
		cout << "Digite um valor inteiro e positivo: ";
		cin >> numero;
		
		if (cin.fail()) {
			
			cin.clear();
			
			cin.ignore(10000, '\n' );
			cout << " Entrada inválida! Digite apenas numeros inteiros.\n";
			
			numero = -1;
		}
		
		else if (numero <= 0) {
			cout << " Valor rejeitado! Es preciso ser maior que zero.\n" ;
		}
		
	} while (numero <= 0);
	
	cout << "\nOK , voce digitou o valor positivo: " << numero << "\n";
	
	return 0;
}