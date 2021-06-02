#include <cstdint>
#include <vector>
#include "Node.h"

using namespace std;

class TwoChainz {

    public:
        TwoChainz();
        void AddChain(Node bNew);
    private:
        uint32_t difficulty;
        vector<Node> _vChain;
        Node _GetLastBlock() const;

};

