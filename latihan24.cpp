#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(){
	cout << setprecision(15);
	const int maxKaryawan = 10;
	string namaKaryawan[maxKaryawan];
	int jamKerja[maxKaryawan];
	float gajiPerjam[maxKaryawan],gajiTotal[maxKaryawan];
	int jumlahKaryawan = 0;
	char lagi;
	
	do{
		cout << "Masukkan Nama Karyawan ke-" << jumlahKaryawan + 1 << ": ";
		cin >> namaKaryawan[jumlahKaryawan];
		cout << "Masukkan Jam Kerja Karyawan " << namaKaryawan[jumlahKaryawan] << ": ";
		cin >> jamKerja[jumlahKaryawan];
		cout << "Masukkan Gaji Perjam " << namaKaryawan[jumlahKaryawan] << ": ";
		cin >> gajiPerjam[jumlahKaryawan];
		gajiTotal[jumlahKaryawan] = jamKerja[jumlahKaryawan] * gajiPerjam[jumlahKaryawan];
		
		jumlahKaryawan++;
		
		cout << "Apakah Anda Ingin Menginput lagi[Y/T]";
		lagi = getch();
		cout << endl;
	} while(lagi == 'Y' || lagi == 'y');
	
	cout << "\n=======================================================\n";
	cout 
	<< setw(15) << left << "Nama"
	<< setw(15) << "Jam Kerja"
	<< setw(15) << "Gaji Perjam"
	<< setw(15) << "Gaji Total" << endl;
	cout << "\n=======================================================\n";
	
	for(int i = 0; i < jumlahKaryawan; i++){
	cout
	<< setw(15) << left << namaKaryawan[i]
	<< setw(15) << jamKerja[i]
	<< setw(15) << gajiPerjam[i]
	<< setw(15) << gajiTotal[i] 
	<< endl;
	}
	cout << "\n=======================================================\n";
	return 0;
}

