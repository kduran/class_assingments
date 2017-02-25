#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char* argv[])
{
	
	int res[4];

	ofstream myfile;
	myfile.open ("even_DuranAhmet.txt");
	
	bool exit = false;
	int index = 0;
	int value;
	
	while(!exit){
		cout << "Please enter a number:";
		cin >> value;
		
		if(value%2==0){
			res[index]=value;
			index++;
		}else{
			cout  << value << " is not an even number" << endl;
		}
		
		if(index==3){
			exit = true;
		}
	}
	
	cout << "Here are the 3 even number : "<< res[0] <<" "<<res[1] << " "<<res[2] << endl;
	myfile <<"Here are the 3 even number : "<< res[0] <<" "<<res[1] << " "<<res[2] << "\n";
	myfile.close();
	system("pause");
    return 0;
}
