#include "NSSeqChangeNode.h"

using namespace ODBFT;

// ============ MoveChangeNode ==============

bool MoveChangeNode::canBeApplied(const RepODBFT& rep, const OptFrameADS* ads)
{
    return true;
}

Move< RepODBFT >* MoveChangeNode::apply(RepODBFT& rep, OptFrameADS* ads)
{
    // apply this move to 'rep'
    // rep. (...) = (...)
    // return reverse move
    return new MoveChangeNode; 
}

MoveCost* MoveChangeNode::cost(const Evaluation&, const RepODBFT& rep, const OptFrameADS* ads, bool allowEstimated)
{
   return NULL;
   // Implement if a more efficient evaluation of the move is available
   //double move_cost = ...;
   //double move_cost_infeasible = ...;
   //return new MoveCost(move_cost, move_cost_infeasible);
}



// ============ NSIteratorChangeNode ==============

void NSIteratorChangeNode::first(){};

void NSIteratorChangeNode::next(){};
	
bool NSIteratorChangeNode::isDone(){};
	
Move< RepODBFT >* NSIteratorChangeNode::current(){};




// ============ NSSeqChangeNode ==============


Move<RepODBFT >* NSSeqChangeNode::randomMove(const RepODBFT& rep, const OptFrameADS* ads)
{
   // you can ignore 'ads' if you want.
   // return a random move (that is, a move operator that generates a neighbor solution of 'rep')
   // you may need to use the random number generator 'rg'
   
   return new MoveChangeNode; 
}
