#include "dna.h"
#include "iostream"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& dna)
{
    double sum = 0;

    for(auto c : dna)
    {
        if (c == 'G' || c == 'C')
            sum++;
    }

    return sum / dna.length();
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string reverse_string(std::string dna)
{
    std::string reverse;

    for(int i = dna.length() - 1; i >= 0; i--)
    {
        reverse.push_back(dna[i]);
    }

    return reverse;
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
std::string get_dna_complement(std::string dna)
{
    std::string dna2 = reverse_string(dna);

    for(auto& c : dna2)
    {
        if (c == 'G')
            c = 'C';
        else if (c == 'C')
            c = 'G';
        else if (c == 'T')
            c = 'A';
        else if (c == 'A')
            c = 'T';
    }

    return dna2;
}