#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	int size = 0, i = 0,a;
	char word[100] = {};
	ifstream infile;
	ofstream outfile;
	infile.open("word.txt");
	infile >> word;
	outfile.open("UppercaseString_DuranAhmet.dat");
	while (word[i] != '\0') {
		size++;
		i++;
	}
	a = size;
	for (i = 0; i <= size; i++) {
		word[i] = toupper(word[i]);
	}

	for (i = size; i >= 0; i--) {
			for (int j = 0; j < size; j++) {
				cout << word[j];
				outfile << word[j];
			}
			cout << endl;
			outfile << endl;
			size--;
		}
	
	
	for (i = a-1; i >= 0; i--) {
		for (int b = a-1; b >= 0; b--) {
			cout << word[b];
			outfile << word[b];
		}
		cout << endl;
		outfile << endl;
		a--;
	}
	
	infile.close();
	outfile.close();
	system("pause");
	return 0;
}