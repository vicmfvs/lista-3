#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	
	do {
		cout << " Digite a quantidade de valores (N), de 1 a 19: ";
		cin >> N;
		
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << " Entrada invalida, digite um numero inteiro.\n";
			N = 0;
		}
		else if (N <= 0 || N >= 20) {
			cout << " Valor invalido, N deve ser maior que 0 e menor que 20.\n";
		}
	} while (N <=0 || N >= 20);
	
	int contadorLidos = 0;
	long long soma = 0;
	int maiorValor = 0;
	int menorValor = 0;
	int countPositivos = 0;
	int countNegativos = 0;
	
	while (contadorLidos < N) {
		int valor;
		
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << " Entrada invalida, digite um numero inteiro.";
			continue;
		}
		soma += valor;
		
		if(contadorLidos == 0) {
			
			maiorValor = valor;
			menorValor = valor;
		} else {
			if (valor > maiorValor) maiorValor = valor;
			if (valor < menorValor) menorValor = valor;
		}
	if (valor > 0) countPositivos++;
	else if (valor < 0) countNegativos++;
	
	contadorLidos++;
	}
	
	double media = static_cast<double>(soma) / N;
	double percPositivos = (static_cast<double>(countPositivos) / N) * 100.0;
    double percNegativos = (static_cast<double>(countNegativos) / N) * 100.0;
    
    cout << "Resultados para N = " << N << " valores === ";
    cout << "a) Maior valor = " << maiorValor << "\n";
    cout << "b) Menor valor = " << menorValor << "\n";
    cout << "c) Soma dos valores = " << soma << "\n";
    cout << fixed << setprecision(2);
    cout << "d) Media aritmetica = " << media << "\n";
    cout << "e) Percentual de positivos = " << percPositivos << "%\n";
    cout << "e) Percentual de negativos = " << percNegativos << "%\n";
	return 0;
}