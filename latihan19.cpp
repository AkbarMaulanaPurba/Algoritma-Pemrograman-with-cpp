#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << setprecision(13);
	int gaji,pajak,pinjaman,gbersih;
	char nama[30],jabatan[30];
	cout << "GAJI KARYAWAN PELITA NUSANTARA" << endl;
	cout << "------------------------------" << endl;
	
	for(int i = 1; i <= 10; i++){
		cout << "Pegawai " << i << endl;
		cout << "Masukkan nama: ";
		cin >> nama;
		cout << "Masukkan jabatan: ";
		cin >> jabatan;
		cout << "Masukkan gaji: ";
		cin >> gaji;
		pajak = 0.15 * gaji;
		cout << "Pajak = " << pajak << endl;
		cout << "Masukan pinjaman: ";
		cin >> pinjaman;
		gbersih = gaji - (pajak + pinjaman);
		cout << "Gaji bersih = " << gbersih << endl;
		cout << endl;
	}
	
}
