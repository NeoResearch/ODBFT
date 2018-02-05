#ifndef ODBFT_CONSTRUCTIVE_Random_H_
#define ODBFT_CONSTRUCTIVE_Random_H_

#include "../../OptFrame/Constructive.hpp"

#include "ProblemInstance.h"

#include "Representation.h"

#include <list>

#include <algorithm>
#include <stdlib.h>

using namespace std;

using namespace optframe;

namespace ODBFT
{

// If you need ADS, you can inherit Constructive<RepODBFT, YourADS>
class ConstructiveRandom: public Constructive<RepODBFT>
{
private:
   ProblemInstance& pODBFT;

   // Your private vars

public:
	
	ConstructiveRandom(ProblemInstance& _pODBFT);
	
	virtual ~ConstructiveRandom();

	Solution<RepODBFT>* generateSolution(double timelimit);
};

}

#endif /*ODBFT_CONTRUCTIVE_Random_H_*/
