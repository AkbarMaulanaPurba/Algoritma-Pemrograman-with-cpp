#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(){
	cout << setprecision(15);
	
	const int max = 100;
	int barangke = 0;
	string nama[max];
	int harga[max],jjual[max],tharga[max],tbayar[max],diskon[max];
	int tpendapatan = 0;
	char lagi;
	
	cout << "PENJUALAN BARANG ELEKTRONIK" << endl;
	cout << "---------------------------" << endl;
	
	do{
		cout << "Masukkan Nama Barang: ";
		cin >> nama[barangke];
		cout << "Masukkan Harga: ";
		cin >> harga[barangke];
		cout << "Masukkan Jumlah Jual: " ;
		cin >> jjual[barangke];
		tharga[barangke] = harga[barangke] * jjual[barangke];
		diskon[barangke] = 0.1 * tharga[barangke];
		tbayar[barangke] = tharga[barangke] - diskon[barangke];
		tpendapatan = tpendapatan + tbayar[barangke];
		barangke++;
		
		cout << "Apakah Mau Input Lagi[Y/T]";
		lagi = getch();
		cout << endl;
	} while(lagi == 'Y' || lagi == 'y');
	
	cout << "\n=====================================================================================\n";
	cout 
	<<setw(13)<< left << "Nama Barang"
	<<setw(13) << "Harga Barang"
	<<setw(13) << "Jumlah Jual"
	<<setw(13) << "Total Harga"
	<<setw(13) << "Diskon"
	<<setw(13) << "Total Bayar"
	<< endl;
	cout << "\n=====================================================================================\n";
	
	for(int i = 0; i < barangke; i++){
	cout
	<<setw(13)<< left << nama[i]
	<<setw(13) << harga[i]
	<<setw(13) << jjual[i]
	<<setw(13) << tharga[i]
	<<setw(13) << diskon[i]
	<<setw(13) << tbayar[i]
	<< endl;
	}
	cout << "\n=====================================================================================\n" << endl;
	cout << endl;
	cout << right << setw(84) << "Total Pendapatan = " << tpendapatan << endl;
	cout << endl;
	return 0;
}
