#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int eq2grau(double a, double b, double c, double &x1, double &x2){
	double delta;
	delta = pow(b,2)-(4*a*c);

	if(delta>0){
	   x1=(-b+sqrt(delta))/(2*a);
	   x2=(-b-sqrt(delta))/(2*a);
       return 3;
}
    else if(delta<0)
    return 2;

    if(delta==0){
    	x1=(-b+sqrt(delta))/(2*a);
    	return 1;
    }
}

int main(){
	double a, b, c, x1, x2;
    int v;
    cin>>a>>b>>c;
    v=eq2grau(a,b,c, x1,x2);
    if(v==1)
    	cout<<fixed<<setprecision(2)<<x1<<endl;
    if(v==2)
    	cout<<"Nao ha raiz real\n";
    if(v==3)
    	cout<<fixed<<setprecision(2)<<x2<<" "<<x1<<endl;

	return 0;
}
