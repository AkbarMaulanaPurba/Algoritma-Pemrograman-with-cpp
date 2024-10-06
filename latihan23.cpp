#include <iostream>
using namespace std;

int main(){
	int matriksA[2][2],matriksB[2][2],hasil[2][2];
	cout << "Masukkan element matriks A (2 x 2)" << endl;
	for(int i = 0; i <2; i++){
		for(int j = 0; j < 2; j++){
			cout << "A[" << i << "][" << j << "]:";
			cin >> matriksA[i][j];
		}
	}
	cout << "Masukkan element matriks B (2 x 2)" << endl;
	for(int i = 0; i <2; i++){
		for(int j = 0; j < 2; j++){
			cout << "B[" << i << "][" << j << "]:";
			cin >> matriksB[i][j];
		}
	}
	for(int i = 0; i <2; i++){
		for(int j = 0; j < 2; j++){
			hasil[i][j] = matriksA[i][j] + matriksB[i][j];
		}
	}
	cout << "Hasil penjumlahan matriks A dan matriks B adalah: " << endl;
	for(int i = 0; i <2; i++){
		for(int j = 0; j < 2; j++){
			cout << hasil[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
