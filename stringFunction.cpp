#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1 = "STMIK";
	string str2 = "PENUSA";
	
	//concatenation = mengabung lebih dari satu string
	string result = str1 + " " + str2;
	cout << "Concatenated: " << result << endl;
	//length panjang string
	 size_t length = result.length();
	 cout << "Length: " << length << endl;
	//substring mengabil string
	 string sub = result.substr(6,6);
	 cout << "Substring: " << sub << endl;
	 //find mencari posisi
	 size_t pos =  result.find("PENUSA");
	 cout << "Position of 'PENUSA': " << pos << endl;
	 // replace menyisipkan atau menambahkan
	 result.replace(0, 5, "Hi");
	 cout << "Replaced: " << result << endl;
	return 0;
}
