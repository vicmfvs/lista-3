#include <iostream>
using namespace std;

int main()
{
	int primeiro, segundo;
	
	while (true) {
		cout << "Digite o primeiro valor (inteiro): ";
	    cin >> primeiro;
	    
	    if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << " Entrada invalida. Por favor, digite um numero inteiro" ".\n";
		} else {
			
			break;
			
		}
        }

    while (true) {
	cout << "Digite o segundo valor (inteiro, maior que " << primeiro << "): ";
	cin >> segundo;
	
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << " Entrada invalida. Por favor, digite um numero inteiro" ".\n";
	}
	else if (segundo <= primeiro) {
		cout <<  " Valor invalido. O segundo valor deve ser MAIOR que " << primeiro << ".\n";
		
	} else {
		break;
		

		}
	    }
	
	cout << "\nValores aceitos: " ".\n";
	cout << " Primeiro = " << primeiro << ".\n";
	cout << " Segundo = " << segundo << ".\n";
	
	return 0;
}