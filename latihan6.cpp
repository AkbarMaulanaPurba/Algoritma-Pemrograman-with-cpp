#include<iostream>
#include<iomanip>
using namespace std;


int main ()
{
	cout << setprecision(15);
    cout <<"Penjualan Barang Elektronik" <<endl;
    char namabarang[15];
    float harga, jumlahjual, totalharga, diskon, totalbayar;
    cout<<"Masukan Nama Barang: ";
	gets(namabarang);
    cout<<"Masukan Harga: ";
    cin>>harga;
    cout<<"Masukan Jumlah Jual: ";
    cin>>jumlahjual;
    totalharga = harga*jumlahjual;
    cout<<"Total Harga = "<<totalharga<<endl;
    diskon=0.1*totalharga;
    cout<<"Diskon ="<<diskon<<endl;
    totalbayar=totalharga-diskon;
    cout<<"Total Bayar = "<<totalbayar<<endl;
    return 0;
}





    
