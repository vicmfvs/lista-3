#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	string sexo;
	
	do{
		cout << " Digite seu sexo (F ou M): ";
		cin >> sexo;
		
		if(sexo == "F" || sexo == "M") {
			break;
		}
	} while (true);
	
	cout << " \nVoce digitou: " << sexo << "\n";
	return 0;
}