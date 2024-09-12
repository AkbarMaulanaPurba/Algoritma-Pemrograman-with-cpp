#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setprecision(13);
	char nama[20];
	int target,jterjual,komisi,sisa,total;
	target = 500000;
	cout << "Komisi Pegawai Perusahaan" << endl;
	cout << "-------------------------" << endl;
	cout << "Masukan Nama: ";
	gets(nama);
	cout << "Masukan Jumlah Terjual: ";
	cin >> jterjual;
	
	if(jterjual == target){
		komisi = jterjual * 0.1;
		sisa = 0;
	}
	if(jterjual > target){
		komisi = jterjual * 0.1;
		sisa = (jterjual - target) * 0.15;
	}
total = komisi + sisa;
if(jterjual >= target){

cout << "Komisi: "<< komisi << endl;
cout << "sisa: " << sisa << endl;
cout << "Total Komisi: " << total;
} else {
	cout << "Tidak Ada Komisi";
}
return 0;
}
