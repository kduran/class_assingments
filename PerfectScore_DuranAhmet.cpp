#include <iostream>

int count = 0;
void Input(double *array);
int countPerfect(double array[], int size);

int main()
{
	
	double array[11];
	Input(array);
	if (count<5 || count>10)
	{
		std::cout << "you enter the wrong no. of quantity ";
	}
	else
	{

		int perfect = countPerfect(array, 11);
		std::cout << "There were " << count << " scores entered include " << perfect << " perfect scores.";
	}
	std::cout << "\n\n";
	system("pause");
}

void Input(double *array)
{
	float score;
	while (true)
	{
		std::cout << "Enter a score 0 - 100 (or -1 to quit) : ";
		std::cin >> score;
		std::cout << "\n" ;
		if (score == -1)
		{
			array[count] = 0;
			break;
		}
		else
		{
			if (score >= 1)
			{
				array[count] = score;
				count++;
			}
			else {
				std::cout << "User entered a number less than 0!!!\n\n" ;
			}
		}
	}
}

int countPerfect(double array[], int size)
{
	int perfect = 0;
	for (int i = 0; i<size; i++)
	{
		if (array[i] == 0)
			break;
		else
		{
			if (array[i] == 100)
			{
				perfect++;
			}
		}
	}
	return perfect;
}
