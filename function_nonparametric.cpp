#include <iostream>
#include <conio.h>
// function non-parametric atau function yang tidak membawa nilai disuatu variabel
using namespace std;
void hitung(); // mendeklarsikan (prototype) fungsi yang menghasilkan nilai
int main(){
	cout << "\n menghitung volume KUBUS" ;
	hitung();
	return 0;
}
void hitung(){
	float sisi,volume;
	cout << "\n Sisi KUBUS: ";
	cin >> sisi;
	volume = sisi * sisi * sisi;
	cout << "\n Volume KUBUS yaitu: " << volume;
	
}
