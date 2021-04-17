#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
    double G_count = 0;
    double C_count = 0;
    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G')
            G_count++;
        if (dna[i] == 'C')
            C_count++;
    }
    return (G_count+C_count) / dna.length();
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    string reverse_DNA = "";
    for (int i = dna.length() - 1; i >= 0; i--)
        reverse_DNA += dna[i];
    return reverse_DNA;
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
    string complement = get_reverse_string(dna);
    for (int i = 0; i < complement.length(); i++)
    {
        switch (complement[i])
        {
        case 'A':
            complement[i] = 'T';
            break;
        case 'T':
            complement[i] = 'A';
            break;
        case 'C':
            complement[i] = 'G';
            break;
        case 'G':
            complement[i] = 'C';
            break;
        }
    }
    return complement;
}