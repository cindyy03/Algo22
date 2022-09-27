#include <iostream>
using namespace std;

int main (){
	
	const double phi = 3.14;
	
	double vol,r,t;
	
	cout<<"Aplikasi mencari volume kerucut"<<endl <<endl;
	
	cout<<"Masukkan jari-jari : "; cin>>r;
	cout<<"Masukkan tinggi : "; cin>>t; 
	
	vol = (phi * r * r * t) / 3;
	
	cout<<"Volume kerucut adalah: "<<vol<<" cm3"<<endl;
	
	return 0;
}


