#include <iostream>
using namespace std;

int main() 
{
	const int N = 30;
	long long a = 1, b = 1;
	
	cout << a << " " << b;
	
	for (int i = 3; i <= N; i++) {
		long long proximo = a + b;
		cout << " " << proximo;
		a = b;
		b = proximo;
	}
	cout << endl;
	return 0;
}