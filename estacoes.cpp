#include <iostream>
using namespace std;
int main() {
	
	int dia, mes;
	cin>>dia>>mes;
		
	//Verão
	 
	if (mes==1 || mes==2) {
		cout<<dia<<" de ";
		if (mes==1)
			cout<<"janeiro";
			else
				cout<<"fevereiro";
	cout<<"\nVerao\n";
		}
		
	if (dia>=22 && mes==12)
		cout<<dia<<" de dezembro\nVerao\n";
		
	if (dia<=19 && mes==3)
		cout<<dia<<" de marco\nVerao\n";
		
	// Outono
		
	if (mes==4 || mes==5) {
		cout<<dia<<" de ";
		if (mes==4)
			cout<<"abril";
			else
				cout<<"maio";
	cout<<"\nOutono\n";
		}
		
	if (dia>19 && mes==3)
		cout<<dia<<" de marco\nOutono\n";
	
	if (dia>=20 && mes==6)
		cout<<dia<<" de junho\nOutono\n";
		
		
	// Inverno
		
	if (mes==7 || mes==8) {
		cout<<dia<<" de ";
		if (mes==7)
			cout<<"julho";
			else
				cout<<"agosto";
	cout<<"\nInverno\n";
		}
		
	if (dia>20 && mes==6)
		cout<<dia<<" de junho\nInverno\n";
	
	if (dia<=22 && mes==9)
		cout<<dia<<" de setembro\nInverno\n";
	
	
	// Primavera
		
	if (mes==10 || mes==11) {
		cout<<dia<<" de ";
		if (mes==10)
			cout<<"outubro";
			else
				cout<<"novembro";
	cout<<"\nPrimavera\n";
		}
		
	if (dia>22 && mes==9)
		cout <<dia<<" de setembro\nPrimavera\n";
		
	if (dia<22 && mes==12)
		cout<<dia<<" de dezembro\nPrimavera\n";
		
	return 0;
}   


