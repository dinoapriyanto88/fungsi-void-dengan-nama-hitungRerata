//Ferli mendapatkan tugas dari dosen untuk mendata data mahasiswa, namun data tersebut
//masih berantakan, bantu Ferli untuk mengelola data tersebut dengan menggunakan
//bahasa C++.

#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	char data[8][100] = {"2117051024John Wilken Christoper N",
						"2117051009Nathania Santa N",
						"2117051048Dhiaurrahman Raziq R",
						"2117051025Stefanus Ferry S", 
						"2117051088Fatimah Abbiyi K",
						"2117051095Jihan Haya M",
						"2117051057Reza Nur Ramadhan",
						"2117051070Muhammad Zidan Pasya"};

	char* endPtr;
	for(int i = 0; i < 8; i++){
	long value = strtod(data[i], &endPtr); 
	cout << "Nama : " << endPtr << endl;
	cout << "NPM : "<< value << endl; 
	cout << endl;
	}
}
