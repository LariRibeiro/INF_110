#include <iostream>
using namespace std;
int main() {
	
	int p, v, soma=0, troco=0;
	cin>>p;	
	cin>>v;
	while (v!=0) {
	soma+=v;
	cin>>v;
	}
	if (p>soma)
		cout<<"Saldo insuficiente.\n";
	else{
		troco=-p+soma;		
		cout<<"Troco de "<<troco<<" centavos.\n";
	}

	return 0;
}
