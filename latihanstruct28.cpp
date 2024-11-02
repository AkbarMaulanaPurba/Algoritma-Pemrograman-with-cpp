#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord; 
	coord.X =  x;
	coord.Y =  y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct data_ujian{
	int npm;
	double n_mid,n_semester;
	char nama[20];
	double n_akhir;
	char n_huruf;
}mhs[100];

int main(){	
	char lg = 'Y';
	int i, m=0;
	
	data_ujian d_ujian;	
cout << setprecision(15);

while(lg == 'Y' || lg == 'y'){
	system("cls");
	cout << " Data Nilai Ujian Pemrograman C++\n";
	cout << " Dosen          : Budiman, S.Si\n";
	cout << "------------------------------------------\n";
	m++;
	cout << " NPM            : ";
	cin >> mhs[m].npm;
	cout << " Nama           : ";
	cin >> mhs[m].nama;
	cout << " Nilai Mid      : ";
	cin >> mhs[m].n_mid;
	cout << " Nilai Semester : ";	
	cin >> mhs[m].n_semester;
	
	mhs[m].n_akhir = (0.4 * mhs[m].n_mid) + (0.6 * mhs[m].n_semester);
	if(mhs[m].n_akhir >= 80 && mhs[m].n_akhir <= 100){
	mhs[m].n_huruf= 'A';	
	}
	else if(mhs[m].n_akhir >= 70 && mhs[m].n_akhir <= 80){
		mhs[m].n_huruf = 'B';
	}
	else if(mhs[m].n_akhir >= 55 && mhs[m].n_akhir < 70){
	mhs[m].n_huruf = 'C';
	}
	else if(mhs[m].n_akhir >= 40 && mhs[m].n_akhir < 55){
	mhs[m].n_huruf = 'D';
	}	
	else if(mhs[m].n_akhir >= 0 && mhs[m].n_akhir < 40){
	mhs[m].n_huruf = 'C';
	}
	else{
	mhs[m].n_huruf = '-';	
	}
	cout << " Nilai Akhir    : " << mhs[m].n_akhir << endl;
	cout << " Nilai Huruf    : " << mhs[m].n_huruf << endl;
	cout << "------------------------------------------\n";
	cout << " Input Lagi[Y/T]: ";
	lg = getch();
}
system("cls");
cout << "+-------------------------------------------------------------------------------+\n";
cout << "|                      Laporan Nilai Ujian Pemrograman C++                      |\n";					
cout << "+-------------------------------------------------------------------------------+\n";
cout << "| No NPM     Nama     Nilai Mid    Nilai Semester    Nilai Akhir    Nilai Huruf |\n";
cout << "+-------------------------------------------------------------------------------+\n";
for(i = 1; i <=m; i++){
gotoxy(0,4+i);cout<<"|";
gotoxy(2,4+i);cout << i;
gotoxy(5,4+i); cout << mhs[i].npm;
gotoxy(13,4+i); cout << mhs[i].nama;
gotoxy(22,4+i); cout << mhs[i].n_mid;
gotoxy(35,4+i); cout << mhs[i].n_semester;
gotoxy(53,4+i); cout << mhs[i].n_akhir;
gotoxy(68,4+i); cout << mhs[i].n_huruf;
gotoxy(80,4+i); cout << "|";
}
gotoxy(0, 4+i);cout << "+-------------------------------------------------------------------------------+\n";

}
