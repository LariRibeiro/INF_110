#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>      /* printf */
#include <cstdlib>     /* abs */
using namespace std;
int main()
{
	long int altura,largura, profundidade, diametro;
	cin>>diametro;
	cin>>altura>>largura>>profundidade;
	if(diametro<=altura&&diametro<=largura&&diametro<=profundidade){
        cout<<"S\n";
    }else{
        cout<<"N\n";
    }
	return 0;
}
