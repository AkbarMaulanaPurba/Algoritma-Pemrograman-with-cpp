#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setprecision(13);
	string nama;
	float jmlterjual,komisi,sisa,totalkomisi; 
	int i,jmlhsalesman;
	i = 1;
	jmlhsalesman = 10;
	cout << "KOMISI SALESMAN PT. MURAH HATI" << endl;
	cout << "------------------------------" << endl;
	
	while(i <= jmlhsalesman){
	cout << "Salesman " << i << endl;
	cout << "Nama: ";
	cin >> nama;
	cout << "Jumlah Penjualan: ";
	cin >> jmlterjual;
	
	if(jmlterjual == 500000){
		komisi = jmlterjual * 0.1;
		sisa = 0;
	}
	 else if(jmlterjual > 500000){
		komisi = jmlterjual * 0.1;
		sisa = (jmlterjual - 500000) * 0.15;
	} else {
		sisa = 0;
	}
totalkomisi = komisi + sisa;

cout << "Komisi: "<< komisi << endl;
cout << "sisa:" << sisa << endl;
cout << "Total Komisi: " << totalkomisi << endl;
cout << endl;
i++;
}
}
