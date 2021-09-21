#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	
	int opcao, p, v, soma=0, troco;
	char tipo; 
	
	cin>>opcao;
	switch (opcao){
		case 1:
			p=430;
			break;
		case 2:
			p=270;
			break;
		case 3:
			p=143;
			break;	
	}
	
	do {
	cin>>tipo;
	cin>>v; 
	if(tipo=='C')
		v=v*100;
	else if (tipo=='M')
			v=v;
	soma+=v;
	}
	while (v!=0);
	
	//Cálculo do saldo
	if (opcao>3)
		cout<<"Produto inexistente.\n";
	else if (p>soma)
			cout<<"Saldo insuficiente.\n";
		else{
			troco=-p+soma;
			
			 while(troco>=10000) {
            troco-=10000;
            cout<<"C 100"<<endl;
        }
        while(troco>=5000) {
            troco-=5000;
            cout<<"C 50"<<endl;
        }
        while(troco>=2000) {
            troco-=2000;
            cout<<"C 20"<<endl;
        }
        while(troco>=1000) {
            troco-=1000;
            cout<<"C 10"<<endl;
        }
        while(troco>=500) {
            troco-=500;
            cout<<"C 5"<<endl;
        }
        while(troco>=200) {
            troco-=200;
            cout<<"C 2"<<endl;
        }
        while(troco>=100) {
            troco-=100;
            cout<<"M 100"<<endl;
        }
        while(troco>=50) {
            troco-=50;
            cout<<"M 50"<<endl;
        }
        while(troco>=25) {
            troco-=25;
            cout<<"M 25"<<endl;
        }
        while(troco>=10) {
            troco-=10;
            cout<<"M 10"<<endl;
        }
        while(troco>=5) {
            troco-=5;
            cout<<"M 5"<<endl;
        }
        while(troco>=1) {
            troco-=1;
            cout<<"M 1"<<endl;
        }
    }
    return 0;
}

