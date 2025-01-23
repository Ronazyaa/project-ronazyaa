#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main() {
	ofstream fileku;
	fileku.open("bacaAku.txt", ios::out);
	fileku << "1; Budi; 90;" << "\n";
	fileku << "2; Toni; 95;" << "\n";
	fileku.close();

	string temp;
	ifstream namaBerkas("bacaAku.txt");
	while (getline(namaBerkas, temp)) {
		cout << temp << "\n";
	}
} 


