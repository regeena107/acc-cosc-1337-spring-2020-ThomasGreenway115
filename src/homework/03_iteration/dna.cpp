#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{
	
	size_t dna_num1 = std::count(dna.begin(), dna.end(), 'G');
	size_t dna_num2 = std::count(dna.begin(), dna.end(), 'C');
	double dna_num = dna_num1 + dna_num2;
	double dna_total = dna_num / dna.length();
	
	return dna_total;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
	int lenght = dna.size() - 1;          //the size of the array, i just put it in a variable to clear the code
	string reversed = dna;                //declare a temporary string
	for (int i = lenght; i >= 0; i--)
	{
		reversed[lenght - i] = dna[i];
		
	}
	return reversed;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	string reversed_dna = get_reverse_string(dna);
	
	std::replace(reversed_dna.begin(), reversed_dna.end(), 'A', 'T');
	
	std::replace(reversed_dna.begin(), reversed_dna.end(), 'T', 'A');
	
	std::replace(reversed_dna.begin(), reversed_dna.end(), 'G', 'C');
	
	std::replace(reversed_dna.begin(), reversed_dna.end(), 'C', 'G');
	
	return reversed_dna;
}
