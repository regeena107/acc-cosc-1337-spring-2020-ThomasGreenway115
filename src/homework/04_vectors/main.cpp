#include"vectors.h"
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	


	vector<int> base_vector{ 8, 4, 20, 88, 66, 99 };
	int menu = 0;
	cout << "Enter 1 if you would like to find the max value from a vector or Enter 2 to find the prime numbers in an int." << "\n";
	cin >> menu;
	int max = get_max_from_vector(base_vector);
	while (menu == 1 || menu == 2)
	{
		if (menu == 1)
		{
			cout << max << "\n";
			cout << "Enter 1 for max value or 2 for prime numbers of an int if you want to exit enter 0. ";
			cin >> menu;
		}
		else if (menu == 2)

		{
			int input = 0;
			cout << "Enter a number that you would like to find the prime numbers for.";
			cin >> input;
			
			vector<int> output = vector_of_primes(input);
			for (auto i : output)
			{
				cout << i << " ";
			}
			cout << "\n";
			cout << "Enter 1 for max value or 2 for prime numbers of an int if you want to exit enter 0. ";
			cin >> menu;
		}
	}
	
	
	return 0;
}