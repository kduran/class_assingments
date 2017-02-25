#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char my_word[100] = {};	
	int a=0,i=0;
	cout << "Please enter one word:";
	cin >> my_word;
	while (my_word[i] != '\0') {
		a++;
		i++;
	}
	
	cout << "There are " << a << " character in ";
	for (int j = 0; j < a; j++) {
		cout << my_word[j];
	}
	cout << endl;
	system("pause");
	return 0;
}