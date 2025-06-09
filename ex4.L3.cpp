#include <iostream> 
using namespace std;

int main()
{
	int numero = 5;
	
	for (int i = 1; i <= 10; i++) {
		
		int resultado = numero * i;
		
		cout << numero << " x " << i << " = " << resultado << endl; 
	}
	return 0;
}