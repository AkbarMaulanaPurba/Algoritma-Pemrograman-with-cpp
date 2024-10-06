#include <iostream>
using namespace std;

int main(){
	int nilai[10], total = 0;
	float rataRata;
	
	for(int i = 0; i < 10; i++){
		cout << "masukkan nilai ke-" <<  i + 1 << ": ";
		cin >> nilai[i];
		total += nilai[i];
	}
	rataRata = total/10.0;
	cout << "Total nilai : " << total << endl;
	cout << "Rata-rata nilai : " << rataRata << endl;
	return 0;
}
