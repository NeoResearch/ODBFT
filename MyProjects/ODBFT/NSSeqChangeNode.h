#ifndef ODBFT_NSSEQChangeNode_H_
#define ODBFT_NSSEQChangeNode_H_

// Framework includes
#include "../../OptFrame/NSSeq.hpp"
#include "../../OptFrame/RandGen.hpp"

// Own includes
#include "ProblemInstance.h"
#include "Representation.h"

using namespace std;

namespace ODBFT
{

class MoveChangeNode: public Move< RepODBFT >
{
private:
    // MOVE PARAMETERS

public:

    MoveChangeNode() // ADD PARAMETERS
    {
    }

    virtual ~MoveChangeNode()
    {
    }
    
    void print() const
    {
        cout << id() << " with params: '" << "ADD MY PARAMETERS" << "'" << endl;
    }
    
    string id() const
    {
        return Move<RepODBFT >::idComponent().append(":MoveChangeNode");
    }
    
    bool operator==(const Move< RepODBFT >& _m) const
    {
        const MoveChangeNode& m = (const MoveChangeNode&) _m;
        // COMPARE PARAMETERS AND RETURN TRUE IF EQUALS
        return false;
    }
    
    // Implement these methods in the .cpp file
    
    bool canBeApplied(const RepODBFT& rep, const OptFrameADS* ads);

    Move< RepODBFT >* apply(RepODBFT& rep, OptFrameADS* ads);
    
    MoveCost* cost(const Evaluation&, const RepODBFT& rep, const OptFrameADS* ads, bool allowEstimated);
};



class NSIteratorChangeNode: public NSIterator< RepODBFT >
{
private:
    // ITERATOR PARAMETERS

public:
    NSIteratorChangeNode() // ADD ITERATOR PARAMETERS
    {
    }

    virtual ~NSIteratorChangeNode()
    {
    }
    
    // Implement these methods in the .cpp file

    void first();
    void next();
    bool isDone();
    Move< RepODBFT >* current();
};



class NSSeqChangeNode: public NSSeq< RepODBFT >
{
private:
    // YOU MAY REMOVE THESE PARAMETERS IF YOU DON'T NEED (BUT PROBABLY WILL...)
    ProblemInstance& pODBFT; // problem instance data
    RandGen& rg;                // random number generator

public:

    // YOU MAY REMOVE THESE PARAMETERS IF YOU DON'T NEED (BUT PROBABLY WILL...)
    NSSeqChangeNode(ProblemInstance& _pODBFT, RandGen& _rg):
        pODBFT(_pODBFT), rg(_rg)
    {
    }

    virtual ~NSSeqChangeNode()
    {
    }
    
    void print() const
    {
        cout << "NSSeqChangeNode" << endl;
    }
    
    string id() const
    {
        return NSSeq<RepODBFT >::idComponent().append(":NSSeqChangeNode");
    }
    
    NSIterator<RepODBFT >* getIterator(const RepODBFT& rep, const OptFrameADS* ads)
    {
        // return an iterator to the neighbors of 'rep' 
        return new NSIteratorChangeNode;  // ADD POSSIBLE ITERATOR PARAMETERS
    }
        
    // Implement this method in the .cpp file

    Move<RepODBFT >* randomMove(const RepODBFT& rep, const OptFrameADS* ads);
    
    // Move<RepODBFT >* validRandomMove(const RepODBFT& rep, const OptFrameADS* ads);
};

}

#endif /*ODBFT_NSSEQChangeNode_H_*/
