#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main(){
	cout << setprecision(15);
	const int maxpg = 50;
	string nama[maxpg],gol[maxpg],kode[maxpg],jabatan[maxpg];
	float gaji[maxpg],tunjangan[maxpg],pinjaman[maxpg],pajak[maxpg],gkotor[maxpg],gbersih[maxpg],total;
	char lagi,label;
	int nopeg = 0;
	cout << "             GAJI PEGAWAI PT. TELKOM" << endl;
	cout << "---------------------------------------------------" << endl;
	
	do{
		

		
		cout << "Pegawai ke-" << nopeg + 1 << endl;
		cout << "Nama Pegawai             : ";
		cin >> nama[nopeg];
		cout << "Golongan                 : ";
		cin >> gol[nopeg];
		cout << "Kode Jabatan             : ";
		cin >> kode[nopeg];
		
		if(gol[nopeg] == "Ia"){
			gaji[nopeg] = 500000;
		}
		else if(gol[nopeg] == "IIa"){
			gaji[nopeg] = 750000;
		}
		else if(gol[nopeg] == "IIIa"){
			gaji[nopeg] = 1000000;
		}
		else if(gol[nopeg] == "Ib"){
			gaji[nopeg] = 150000;
		}
		else if(gol[nopeg] == "IIb"){
			gaji[nopeg] = 1750000;
		}
			else if(gol[nopeg] == "IIIb"){
			gaji[nopeg] = 2500000;
		}
		else{
			gaji[nopeg] = 0;
		}
		
		if(kode[nopeg] == "Dir"){
			jabatan[nopeg] = "Direktur";
			tunjangan[nopeg] = 450000;
		}
		else if(kode[nopeg] == "Sek"){
			jabatan[nopeg] = "Sekretaris";
			tunjangan[nopeg] = 300000;
		}
		else if(kode[nopeg] == "Wak"){
			jabatan[nopeg] = "Wakil Direktur";
			tunjangan[nopeg] = 375000;
		}
		else if(kode[nopeg] == "Stf"){
			jabatan[nopeg] = "Staf Administrasi";
			tunjangan[nopeg] = 200000;
		}
		else{
			jabatan[nopeg] = "-";
			tunjangan[nopeg] = 0;
		}
		
		pajak[nopeg] = gaji[nopeg] * 0.05;
		gkotor[nopeg] = gaji[nopeg] + tunjangan[nopeg];
	
		
		
		cout << "Jabatan                  : " << jabatan[nopeg] << endl;
		cout << "Gaji                     : " << gaji[nopeg]<< endl;
		cout << "Tunjangan                : " << tunjangan[nopeg]<< endl;
		cout << "Pinjaman                 : ";
		cin >> pinjaman[nopeg];
		
		cout << "Pajak                    : " << pajak[nopeg]<< endl;
		cout << "Total Gaji Kotor         : " << gkotor[nopeg]<< endl;
			gbersih[nopeg] = gkotor[nopeg] - pinjaman[nopeg] - pajak[nopeg];
		cout << "Total Gaji Bersih        : " << gbersih[nopeg]<< endl;
		cout << endl;
		cout << "---------------------------------------------------" << endl;
			total = total + gbersih[nopeg];
		nopeg++;
		cout << endl;
		cout << "Masih Ingin Menghitung Gaji Lagi[Y/T]: ";
		lagi = getch();
		cout << endl;
	}while(lagi == 'Y' || lagi == 'y');

	cout << "                                Laporan PT. TELKOM" << endl;
	cout << "\n================================================================================\n " << endl;
	cout 
		<< left << setw(2) <<""
		<<setw(9) << "Nama "
		<< setw(18) << "Jabatan "
		<< setw(9) << "Gaji "
		<< setw(14) << "Pinjaman "
		<< setw(14) << "Gaji Kotor "
		<< setw(14) << "Gaji Bersih " << endl;
	cout << "\n================================================================================\n " << endl;
		
	for(int i = 0; i < nopeg; i++){
		cout << endl;
		cout << left << setw(2) <<""
		<< setw(9) << nama[i]
		<< setw(18) << jabatan[i]
		<< setw(9) << gaji[i]
		<< setw(14) << pinjaman[i]
		<< setw(14) << gkotor[i]
		<< setw(14) << gbersih[i] << endl;

	}
	cout << "\n================================================================================\n " << endl;
	cout <<right<< setw(66) << "Total Gaji Keseluruhan: " << total;
	return 0;
}
