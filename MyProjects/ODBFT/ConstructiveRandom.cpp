#include "ConstructiveRandom.h"

using namespace ODBFT;

ConstructiveRandom::ConstructiveRandom(ProblemInstance& _pODBFT): 
        pODBFT(_pODBFT)
{
}
	
ConstructiveRandom::~ConstructiveRandom()
{
}

Solution<RepODBFT>* ConstructiveRandom::generateSolution(double timelimit)
{
    RepODBFT newRep;

    // if no Solution can be built in timelimit, return nullptr.
    return new Solution<RepODBFT>(newRep);			
}
