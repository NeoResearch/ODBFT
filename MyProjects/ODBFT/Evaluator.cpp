#include "Evaluator.h"

using namespace ODBFT;

MyEvaluator::MyEvaluator(ProblemInstance& _pODBFT): // If necessary, add more parameters
pODBFT(_pODBFT)
{
	// Put the rest of your code here
}
	
MyEvaluator::~MyEvaluator()
{
}

Evaluation MyEvaluator::evaluate(const RepODBFT& rep, const OptFrameADS* ads)
{
    // you can ignore parameter 'ads'
    // 'rep' is the representation of the solution

    double fo = 0; // Evaluation Function Value

    return Evaluation(fo);
}


bool MyEvaluator::isMinimization() const
{
	// MINIMIZATION
	return true;
}
