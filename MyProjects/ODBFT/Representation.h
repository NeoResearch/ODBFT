#ifndef ODBFT_REPRESENTATION_H_
#define ODBFT_REPRESENTATION_H_

#include <vector>
#include <ostream>
#include "../../OptFrame/Util/printable.h"
#include "../../OptFrame/Util/Matrix.hpp"


using namespace std;

// Solution Representation
struct RepODBFT
{
	vector<double> speakerWeights;
	vector<double> delegateWeights;
};
// Remember that RepODBFT must implement: (i) copy constructor and (ii) operator<<

// Auxiliary Data Structures (default 'int')
//typedef int MY_ADS; // maybe try again in the future something like ADSODBFT...

//
ostream & operator<< (ostream & s, const RepODBFT){
	s << " Printing solution..." << endl;
	return s;
};



#endif /*ODBFT_REPRESENTATION_H_*/

