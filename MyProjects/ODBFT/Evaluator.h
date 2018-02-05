#ifndef ODBFT_EVALUATOR_H_
#define ODBFT_EVALUATOR_H_

//#include <cmath>
#include <stdlib.h>
#include <math.h>

#include "../../OptFrame/Evaluation.hpp"
#include "../../OptFrame/Evaluator.hpp"

#include "Representation.h"
#include "ProblemInstance.h"


namespace ODBFT
{

// If you need ADS, you can inherit Evaluator<RepODBFT, YourADS>
class MyEvaluator: public Evaluator<RepODBFT>
{
private:
	ProblemInstance& pODBFT;

	// Your private vars

public:
	MyEvaluator(ProblemInstance& _pODBFT);
	
	virtual ~MyEvaluator();

    // you can replace OptFrameADS with your prefered ADS
	Evaluation evaluate(const RepODBFT& rep, const OptFrameADS* ads);
	
	virtual bool isMinimization() const;
};

}

#endif /*ODBFT_EVALUATOR_H_*/

