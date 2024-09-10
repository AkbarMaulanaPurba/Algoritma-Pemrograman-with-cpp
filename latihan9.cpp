#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	float jkerja, gharian, gaji, glembur, gtotal;
	char nama[20], jabatan[20];
	cout << setprecision(15);
	
	cout << "PT. Akbar Purba" << endl;
	cout << "---------------" << endl;
	cout << "Masukan Nama: ";
	gets(nama);
	cout << "Masukan Jabatan: ";
	gets(jabatan);
	cout << "Masukan Jumlah Jam Kerja: ";
	cin >> jkerja;
	
	
	gaji = 500;
	 if(jkerja > 7){
		glembur = 1.5 * gaji * (jkerja - 7 );	
	}
	
	gharian = jkerja * gaji;
	gtotal = gharian + glembur;
	
	 if(jkerja > 0){
	cout << "Gaji Harian = " << gharian << endl;
	cout << "Gaji Lembur = " << glembur << endl;
	cout << "Gaji Total = " <<  gtotal << endl;
}
else {
	cout << "Jam Kerja Tidak Valid!";
}
	return 0;
	
}
