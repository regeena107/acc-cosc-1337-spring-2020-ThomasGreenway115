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
	double dna_GC = 0.0;
	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == 'G')
		{
			dna_GC++;
		}
		else if (dna[i] == 'C')
		{
			dna_GC++;
		}
	}
	double dna_total = dna_GC / dna.length();

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
	
	for (char & i : reversed_dna) 
	{
		switch (i) {
		case 'A':
			i = 'T';
			break;
		case 'T':
			i = 'A';
			break;
		case 'C':
			i = 'G';
			break;
		case 'G':
			i = 'C';
			break;
		}
	}
	return reversed_dna;
}

