#include <iostream>
#include <string>
using namespace std;

int main()
{
	string dummy;
	
	for(int num = 1; num <= 20; ++num) {
		cout << "tabuada do " << num << ":\n";
		
		for(int i = 1; i <= 10; ++i) {
			cout << num << " x " << i << " = " << (num * i) << "\n";
		}
		if(num < 20) {
			cout << " Pressione enter para exibir a proxima tabuada...";
			
			getline(cin, dummy);
			cout << "\n";
		}
	}
	return 0;
}