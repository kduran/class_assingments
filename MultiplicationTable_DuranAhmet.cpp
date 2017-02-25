#include <iomanip>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ofstream myfile;
	

int GetArrayTableSize(int & UserInput){
	if(UserInput<=0 || UserInput>10){
		return 0;
	}else{
		return 1;
	}
} 
void PrintArray(int multiply[10][10], int row, int col, int UserInput){

	for(int i=0;i<=row;++i){
		if(i==0){
			cout << setw(8) << ":";
			myfile << setw(8) << ":";
		}else{
			cout <<setw(7)<<multiply[0][i];
			myfile <<setw(7)<<multiply[0][i];
		}
	}
	cout << endl;
	myfile <<"\n";
	
	
	for(int i=0;i<=row;++i){
		cout <<"-------";
		myfile <<"-------";
	}
	cout << endl;
	myfile <<"\n";
	
	for(int i=1;i<=col;++i){
		for(int j=0;j<=row;++j){
			if(j==0){
				cout << setw(7)<<multiply[i][j]<<":";
				myfile << setw(7)<<multiply[i][j]<<":";
			}else{
				cout <<setw(7)<< multiply[i][j];
				myfile <<setw(7)<< multiply[i][j];
			}
		}
		cout << endl;
		myfile <<"\n";
	}
    
	myfile.close();
}

void PopulateArray(int multiply[10][10], int row, int col, int UserInput){
	
	for(int i=1;i<=UserInput;++i){
		multiply[i][0] = i;
		multiply[0][i] = i;
	}
	
	for(int i=1;i<=row;++i){
		for(int j=1;j<=col;++j){ 
			multiply[j][i] = j*i;
		}
	}
	
	PrintArray(multiply,row,col,UserInput);
}
int main (int argc, char* argv[])
{
	int multiply[10][10];
	int n=0;
	myfile.open("mtable_DuranAhmet.txt");
	while(GetArrayTableSize(n)==0){
		cout << "which multiplication table would you like to see ? ";
		cin >> n;
	}
	
	PopulateArray(multiply,n,n,n);
	
	system("pause");
    return 0;
}
