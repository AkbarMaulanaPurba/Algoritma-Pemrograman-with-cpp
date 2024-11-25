#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void buatFile();
void tulisFile();
void tambahFile();
void bacaFile();

int main(){
	int pilihan;
	
	do{
		cout << "\n ===[ Menu Pemberkasan ] === \n";
		cout << "1. Buat Berkas baru\n";
		cout << "2. Tulis Isi Berkas\n";
		cout << "3. Tambahkan Tulisan Ke Berkas\n";
		cout << "4. Tampilkan Isi Berkas\n";
		cout << "5. Keluar\n";
		cout << "Pilihan Menu (1-5): ";
		cin >> pilihan;
		switch(pilihan){
			case 1: 
			buatFile();
			break;
		
			case 2:
			tulisFile();
			break;
			
			case 3:
			tambahFile();
			break;
			
			case 4:
			bacaFile();
			break;
			
			default:
			cout << "Keluar Dari Program\n";
			break;
			}
		}
		while(pilihan != 5);
	return 0;
}
void buatFile(){
	string berkas;
	cout << "Masukkan Nama File Baru: ";
	cin >> berkas;
	ofstream gas(berkas.c_str());
	if(gas.is_open()){
		gas.close();
		cout << "File \"" << berkas << "\" berhasil dibuat\n";
	}
	else
		cout << "File \"" << berkas << "\" tidak berhasil dibuat\n";
	
}
void tulisFile(){
	string berkas,teks;
	cout << "Masukkan Nama FIle: ";
	cin >> berkas;
	ofstream gas(berkas.c_str(), ios::out); // menimpa isi 
	if(gas.is_open()){
		cin.ignore();
		cout << "Masukkan tulisan yang ingin anda input ke dalam file \n";
		getline(cin,teks);
		gas << teks << endl;
		gas.close();
		cout << "Tulisan Berhasil Diinput Ke dalam Berkas \"" << berkas << "\" \n";
	}
		else 
		cout << "Tulisan pada Berkas\"" << berkas << "\"tidak berhasil di tambahkan \n";
		
	
}
void tambahFile(){
	string berkas,teks;
	cout << "Masukkan nama file untuk ditambahkan: ";
	cin >> berkas;
	ofstream gas(berkas.c_str(), ios::in); // menambah isi file
	if(gas.is_open()){
		cin.ignore();
		cout << "Masukkan tulisan yang ingin diinput kedalam file \n";
		getline(cin, teks);
		gas << teks << endl;
		gas.close();
		cout << "Tulisan berhasil diinput ke dalam berkas \"" << berkas << "\"tidak berhasil di tambahkan \n";
	}
	else 
	cout << "Tulisan pada Berkas\"" << berkas << "\"\n";
}
void bacaFile(){
	string berkas,baris;
	cout << "Masukkan Nama File Untuk Ditampilkan: ";
	cin >> berkas;
	
	ifstream gas(berkas.c_str());
	if(gas.is_open()){
		cout << "Isi Berkas \"" << berkas << "\"berhasil dibuat\n";
		while(getline(gas, baris)) cout << baris << endl;
	}
	else
	cout << "Berkas\"" << berkas << "\"tidak berhasil dibuat\n";                               
}
