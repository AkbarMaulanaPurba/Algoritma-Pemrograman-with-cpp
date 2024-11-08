#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	cout << setprecision(15);
	char nama[20],gol[5],kode[4],jabatan[20];
	float gaji,tunjangan,pinjaman,pajak,gkotor,gbersih;
	char lagi,label;
	int nopeg = 0;
	int hasil = 0;
	cout << "             GAJI PEGAWAI PT. TELKOM" << endl;
	cout << "---------------------------------------------------" << endl;
	
	do{
		
	system("cls");
		
		cout << "Pegawai ke-" << nopeg + 1 << endl;
		cout << "Nama Pegawai             : ";
		cin >> nama;
		cout << "Golongan                 : ";
		cin >> gol;
		cout << "Kode Jabatan             : ";
		cin >> kode;
		
		hasil = strcmp(gol, "Ia");
		if(hasil == 0){
			gaji = 500000;
		}
			hasil = strcmp(gol, "IIa");
		if(hasil == 0){
			gaji = 750000;
		}
		hasil = strcmp(gol, "IIIa");
		if(hasil == 0){
			gaji = 1000000;
		}
		hasil = strcmp(gol, "Ib");
		if(hasil == 0){
			gaji = 1500000;
		}
			hasil = strcmp(gol, "IIb");
		if(hasil == 0){
			gaji = 1750000;
		}
			hasil = strcmp(gol, "IIIb");
		if(hasil == 0){
			gaji = 2500000;
		}
		
		hasil = strcmp(kode, "Dir");
		if(hasil == 0){
			strcpy(jabatan, "Direktur");
			tunjangan = 450000;
		}
		hasil = strcmp(kode, "Sek");
		if(hasil == 0){
			strcpy(jabatan, "Sekretaris");
			tunjangan = 300000;
		}
		hasil = strcmp(kode, "Wak");
		if(hasil == 0){
			strcpy(jabatan, "Wakil Direktur");
			tunjangan = 375000;
		}
		hasil = strcmp(kode, "Stf");
		if(hasil == 0){
			strcpy(jabatan, "Staf Administrasi");
			tunjangan = 20000;
		}
		
		
		cout << "Jabatan                  : " << jabatan << endl;
		cout << "Gaji                     : " << gaji<< endl;
		cout << "Tunjangan                : " << tunjangan<< endl;
		cout << "Pinjaman                 : ";
		cin >> pinjaman;
		pajak = gaji * 0.05;
		cout << "Pajak                    : " << pajak<< endl;
		gkotor = gaji - tunjangan;
		cout << "Total Gaji Kotor         : " << gkotor<< endl;
		gbersih = gkotor - pinjaman - pajak;
		cout << "Total Gaji Bersih        : " << gbersih<< endl;
		cout << endl;
		cout << "---------------------------------------------------" << endl;
		
		nopeg++;
		cout << endl;
		cout << "Masih Ingin Menghitung Gaji Lagi[Y/T]: ";
		lagi = getch();
		cout << endl;
	}while(lagi == 'Y' || lagi == 'y');
	if(lagi == 'T' || lagi == 't'){
		system("cls");
		cout << "Anda Tidak Melanjutkan Input";
}
	return 0;
}
