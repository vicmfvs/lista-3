#include <iostream>
using namespace std;

int main() {
	int repetir = 1;
	
	while (repetir == 1) {
		int N;
		
		do {
			cout << " Digite um numero inteiro (sem ser negativo): ";
			cin >> N;
			if (N < 0) {
				cout << "Valor invalido, precisa ser >= 0.";
			}
		
	} while (N < 0);
	
	int fatorial = 1;
	for (int i = 1; i <= N; i++) {
		fatorial += i;
	}
	cout << N << "! = " << fatorial << "\n";
	
	cout << " Deseja calcular outro fatorial? (1 = sim, 0 = nao): ";
	cin >> repetir;
	cout << "\n";
} 
return 0;
}