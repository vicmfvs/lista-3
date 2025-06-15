#include <iostream> 
using namespace std;

int main()
{
	int X;
	
	do{
		cout << " Digite o valor x (somente inteiro positivo): ";
		cin >> X;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(10000, '\n');
			cout << " Valor nao valido, o numero precisa ser maior que zero.";
		}
		
	}while (X <= 0);
	
	int A;
	
	while(true) {
		cout << "Digite o limite inferior do intervalo (A): ";
		cin >> A;
		
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << " Entrada invalida, digite apenas numeros inteiros.";
		}
		else {
			break;
		}
	}
	 int B;
	 
	 do {
		 cout << "Digite o limite superior do intervalo (B, maior que " << A << "): ";
		 cin >> B;
		 
		 if (cin.fail()) {
			 cin.clear();
			 cin.ignore(10000, '\n');
			 cout << " Valor invalido, B deve ser maior que " << A << ".\n";
		 }
		 else {
			 break;
		 }
	 } while (true);
	 
	 cout << "Tabuada de " << X << " do intervalo de " << B << " ate " << A << " (decrescente):\n";
	 for (int i = B; i >= A; i--) {
		 cout << X << " X " << i << " = " << (X * i) << "\n";
	 }
	return 0;
}