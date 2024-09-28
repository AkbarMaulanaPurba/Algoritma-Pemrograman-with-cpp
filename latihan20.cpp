#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	int jumlahBarang,totalPenjualan = 0;
	char lagi = 'Y';
	
	while(lagi == 'Y' || lagi == 'y'){
		cout << "Masukan jumlah barang yang terjual ditoko"<<  ": ";
		cin >> jumlahBarang;
		totalPenjualan += jumlahBarang;
	cout << "Total barang yang terjual ditoko adalah: " << totalPenjualan << endl;
	cout << "Apakah mau input lagi[Y/T]: ";
	
	lagi = getch();
	cout << endl;
}
if(lagi == 'T' || lagi == 't'){
	cout << "Kamu tidak melanjutkan input" << endl;
}
}
