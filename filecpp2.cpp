#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ofstream file("data.txt");
	
	if(file.is_open()){
	
	file << "STMIK Penusa\n";
	file << "Belajar Algoritma Pemrograman.";
	cout << "Berhasil Dikirim";
	file.close();
}
else {
	cout << "File Tidak Bisa Dibuka";
}
return 0;
}