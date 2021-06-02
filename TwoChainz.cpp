#include "TwoChainz.h"

TwoChainz::TwoChainz() {
    _vChain.emplace_back(Node(0, "Genesis Block"));
    difficulty = 6;
}

void TwoChainz::AddChain(Node bNew) {
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(difficulty);
    _vChain.push_back(bNew);
}  

Node TwoChainz::_GetLastBlock() const {
    return _vChain.back();
}   
