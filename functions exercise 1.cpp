
// 137533 Kelvin Lemanta

#include <iostream>
using namespace std;


double division(double, double);


double division (double a, double b){
return a/b;
}

int main(){
double x,y,z;
do {
	cout<<"Please enter 2 numbers: ";
	cout<<" Input first number: ";
	cin>>x;
	cout<<" Input second number: ";
    cin>>y;
    z=division (x,y);
    cout<<x<<"divide by"<<y<<"is"<<z<<endl;
}while (x!=0 && y!=0);
return 0;
}

