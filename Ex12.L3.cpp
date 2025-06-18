#include <iostream>
using namespace std;

int main()
{
	int repetir = 1;
	
	while (repetir == 1) {
		int N;
		
		do {
			cout << " Digite a quantidade de valores (1 a 19): ";
			cin >> N;
			if (N < 1 || N > 19) {
				cout << " valor invalido, N deve estar entre 1 e 19.";
	    	}
		} while (N < 1 || N > 19); {
		int soma = 0;
		int maior = 0;
		int menor = 0;
		int contPos = 0;
		int contNeg = 0;
		
		for (int i = 1; i <= N; i++) {
			int v;
			cout << "Valor #" << i << ": ";
			cin >> v;
			
			soma += v;
			if (i == 1) {
				maior = menor = v;
			} else {
				if (v > maior) maior = v;
				if (v < menor) menor = v;
			} 
		if (v > 0) contPos++;
		else if (v < 0) contNeg++;
		}
	double media = double(soma) / N;
	double pctPos = contPos * 100.0 /N;
	double pctNeg = contNeg * 100.0 /N;
	
	cout << "Resultados ===";
	cout << " Maior valor       : " << maior << "\n";
	cout << " Menor valor       : " << menor << "\n";
	cout << " Soma dos valores  : " << soma << "\n";
	cout << " Media             : " << media << "\n";
	cout << " % Positivos       : " << pctPos << "\n";
	cout << " % Negativos       : " << pctNeg << "\n";
	
	cout << " Deseja nova execucao? (1=sim. 0 = nao): ";
	cin >> repetir;
	cout << "\n";
		}
	}
	return 0;
}