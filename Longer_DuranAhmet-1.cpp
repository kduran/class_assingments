#include <iostream>
#include <string>
using namespace std;

void getStrings(string *array, int size)
{
	string s;
	for (int i = 0; i<size; i++)
	{
		cout << "Please enter a string statement " << i + 1 << ": ";
		cin >> s;
		array[i] = s;
	}
}

string LonestString(string *array, int size)
{
	string longest = array[0];
	for (int i = 0; i<size; i++)
	{
		if (array[i].size()>longest.size())
		{
			longest = array[i];
		}
	}
	return longest;
}

int main()
{
	char quote = '"';
	string array[3], longest;
	getStrings(array, 3);
	longest = LonestString(array, 3);
	cout << "\nYou entered the following string statements :" << quote << array[0] << quote << " " << quote << array[1] << quote << " " << quote << array[2] << quote;
	cout << "\n" << quote << longest << quote << " is the longest string";
	cout << "\n\n";
	system("pause");
}