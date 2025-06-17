#include <iostream>
using namespace std;

int main()
{
	const int TOTAL = 10;
	int count = 0;
	int valor;
	int maiorValor = 0;
	long long soma = 0;
	
	while(count < TOTAL)
	{
		cout << " Digite o valor positivo #" << (count + 1) << ": ";
		cin >> valor;
		
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, 'n');
			cout << " Entrada invalida, digite apenas numeros inteiros.";
			continue;
		}
		if (valor <= 0) {
			cout << " Valor invalido, informe um numero inteiro maior que zero.";
			continue;
		}
		
		soma += valor;
		if (count == 0 || valor > maiorValor) {
			maiorValor = valor;
		}
		count++;
	}
	
	double media = static_cast<double>(soma) / TOTAL;
	
	cout << "Resultados: ";
	cout << "a) Maior valor lido  = " << maiorValor << "\n";
	cout << "b) Soma dos valores  = " << soma << "\n";
	cout << "c) Media aritimetica  = " << media << "\n";
	
	return 0;
}