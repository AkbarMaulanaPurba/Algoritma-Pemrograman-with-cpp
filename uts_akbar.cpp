#include <iostream>
#include <iomanip>
using namespace std;

int main(){
cout << setprecision(15);
int maxms = 50;
int nopem = 0;
char lanjut;
string nama[maxms],jurusan[maxms],kode[maxms];
int npm[maxms],pem_awal[maxms],jml_cicilan[maxms],bsr_cicilan[maxms],pem_ke[maxms],uang_kuliah[maxms],uang_terbayar[maxms],
sisa_uang[maxms];	
float t_uangKuliah,t_uangTerbayar,t_sisaUang;
	
	
cout << "----------------------------------------------------------------" << endl;						
cout << "                     PEMBAYARAN UANG KULIAH" << endl;

do{
	cout << "----------------------------------------------------------------" << endl;
	cout << "  Nomor Pembayaran: " << nopem + 1 << endl;
	cout << "  Nama Mahasiswa               : ";
	cin >> nama[nopem];
	cout << "  NPM                          : ";
	cin >> npm[nopem];
	cout << "  Kode                         : ";
	cin >> kode[nopem];
	
	if(kode[nopem] == "SI"){
		jurusan[nopem] = "Sistem Informasi";
		pem_awal[nopem] = 2100000;
		jml_cicilan[nopem] = 7;
		bsr_cicilan[nopem] = 300000;
	}
	else if(kode[nopem] == "TI"){
		jurusan[nopem] = "Teknik Informatika";
		pem_awal[nopem] = 2500000;
		jml_cicilan[nopem] = 7;
		bsr_cicilan[nopem] = 300000;
	}
	else if(kode[nopem] == "KA"){
		jurusan[nopem] = "Komputer Akuntansi";
		pem_awal[nopem] = 1750000;
		jml_cicilan[nopem] = 6;
		bsr_cicilan[nopem] = 200000;
	}
	else if(kode[nopem] == "MI"){
		jurusan[nopem] = "Manajemen Informatika";
		pem_awal[nopem] = 1500000;
		jml_cicilan[nopem] = 6;
		bsr_cicilan[nopem] = 250000;
	}
	else{
		jurusan[nopem] = '-';
		pem_awal[nopem] = 0;
		jml_cicilan[nopem] = 0;
		bsr_cicilan[nopem] = 0;
	}
	
	cout << "  Jurusan                      : " << jurusan[nopem] << endl;
	cout << "  Pembayaran Awal              : Rp" << pem_awal[nopem] << endl;
	cout << "  Jumlah Cicilan               : " << jml_cicilan[nopem] << endl;
	cout << "  Besar Cicilan                : Rp" << bsr_cicilan[nopem] << endl;
	cout << "  Pembayaran Ke                : ";
	cin >> pem_ke[nopem];
	
	uang_kuliah[nopem] = pem_awal[nopem] + (jml_cicilan[nopem] * bsr_cicilan[nopem]);
	uang_terbayar[nopem] = pem_awal[nopem] + (pem_ke[nopem] * bsr_cicilan[nopem]);
	sisa_uang[nopem] = uang_kuliah[nopem] - uang_terbayar[nopem];
	
	t_uangKuliah = t_uangKuliah + uang_kuliah[nopem];
	t_uangTerbayar = t_uangTerbayar + uang_terbayar[nopem];
	t_sisaUang = t_sisaUang + sisa_uang[nopem];
	
	cout << "  Uang Kuliah                  : Rp"<< uang_kuliah[nopem] << endl;
	cout << "  Uang Kuliah Terbayar         : Rp" << uang_terbayar[nopem] << endl;
	cout << "  Sisa Uang kuliah             : Rp" << sisa_uang[nopem] << endl;
	cout << "----------------------------------------------------------------" << endl;
	nopem++;
	cout << "  Masih Ingin Menghitung[Y/T]: ";
	cin >> lanjut;
}
while(lanjut == 'Y' || lanjut == 'y');

//TABLE
cout << endl;
	cout << "\n==================================================================================================================\n" << endl;
	cout << "                                        LAPORAN HASIL PEMBAYARAN UANG KULIAH" << endl;
	cout << "\n==================================================================================================================\n" << endl;
cout 
	<< left << setw(2) << " "
	<< setw(10) << "Nama"
	<< setw(10) << "NPM"
	<< setw(24) << "Jurusan"
	<< setw(15) << "Pembayaran Ke"
	<< setw(13) << "Uang Kuliah"
	<< setw(22) << "Uang kuliah Terbayar"
	<< setw(19) << "Sisa Uang Kuliah" << endl;
	cout << "\n==================================================================================================================\n" << endl;

	for(int i = 0; i < nopem; i++){
	cout << endl;
	cout 
	<< left << setw(2) << " "
	<< setw(10) << nama[i]
	<< setw(10) << npm[i]
	<< setw(24) << jurusan[i]
	<< setw(15) << pem_ke[i]
	<< setw(13) << uang_kuliah[i]
	<< setw(22) << uang_terbayar[i]
	<< setw(19) << sisa_uang[i] << endl;
	
}
cout << "\n==================================================================================================================\n" << endl;
cout 
	<< right 
	<< setw(61) << "=" << t_uangKuliah
	<< setw(6) <<"=" << t_uangTerbayar
	<< setw(14) <<"=" << t_sisaUang<< endl;
cout << "\n==================================================================================================================\n" << endl;

	return 0;
}
