#include <iostream>
using namespace std;


int main(){
	int jumlahData, jumlahBarang,totalPenjualan = 0;
	cout << "Masukan jumlah data: ";
	cin >> jumlahData;
	
	for(int i = 1; i <= jumlahData; i++){
		cout << "Masukan jumlah barang yang terjual ditoko " << i << ':';
		cin >> jumlahBarang;
		totalPenjualan += jumlahBarang; //totalPenjualan = totalPenjualan + jumlahBarang
	}
	cout << "Total barang yang terjual ditoko adalah: " << totalPenjualan << endl;
}
