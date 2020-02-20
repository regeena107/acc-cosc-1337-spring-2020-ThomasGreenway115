//write include statements
#include "dna.h"
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string yes_no = "Y";
	while ((yes_no == "y") || (yes_no == "Y"))
	{
		int menu = 0;
		string dna_str;
		cout << "Press 1 to Calculate GC Content or Press 2 to Get the DNA Completement.";
		cin >> menu;
		cout << "Please enter a DNA string.";
		cin >> dna_str;
		
		if (menu == 1)
		{
			cout << "The GC content is " << get_gc_content(dna_str) << " percent." << "\n";	
		}
		else if (menu == 2)
		{
			cout << "The DNA completement is " << get_dna_complement(dna_str) << "\n";
		}
		cout << "Do you want to contiune? Enter Y or y to continue";
		cin >> yes_no;
	}

	
		return 0;
}