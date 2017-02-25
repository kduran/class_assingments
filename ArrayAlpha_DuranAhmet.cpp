#include <iostream>
#include <iomanip>
using namespace std;

int ma[51];
int number;
char letter;

	
void InitializeArray (){
	
	for(int i=0;i<50;++i){
		if(i<25){
			ma[i] = i*i;
		}else{
			ma[i] = 3*i;
		}
	}
}

void OutputArray(){
	
	for(int i=0;i<50;++i){
		if(i%10==0 && i!=0){
			cout << endl;
		}
		cout << setw(5) << ma[i] ;
	}
	cout << endl << endl;
}

void FindMult(){
	for(int i=0;i<50;++i){
		if(i%10==0 && i!=0){
			cout << endl << "\n";
		}
		
		if(ma[i]%number==0){
			cout << setw(6) << ma[i]<<letter;
		}else{
			cout << setw(7) << ma[i];
		}
	}
	cout << endl;
} 

int main (int argc, char* argv[])
{
	InitializeArray();
	OutputArray();
	
	cout << "Please enter a number :";
	cin >> number;
	
	cout << "Please enter a letter :";
	cin >> letter;
    
    cout << "Please place "<<letter<<" by each multiple of "<< number << "\n" << endl;
	FindMult();
    
	system("pause");
    return 0;
}
