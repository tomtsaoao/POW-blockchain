#include "Node.h"
#include <sstream>
#include "sha256.h"

Node::Node(uint32_t nIndexIn, const string &sDataIn): _nIndex(nIndexIn), _sData(sDataIn) {
    _nNonce = -1;
    _tTime = time(nullptr);
}

string Node::GetHash() {
    return _sHash;
}

void Node::MineBlock(uint32_t difficulty) {
    char cstr[difficulty + 1];

    for (uint32_t i = 0; i < difficulty; ++i) {
        cstr[i] = '0';
    }
    
    cstr[difficulty] = '\0';
    string str(cstr);

    do {
        _nNonce++;
        _sHash = _CalculateHash();
    } while (_sHash.substr(0, difficulty) != str);

    cout << "Block mined:" << _sHash << endl;
}

inline string Node::_CalculateHash() const {
    stringstream ss;
    ss << _nIndex << _tTime << _sData << _nNonce << sPrevHash;
    return sha256(ss.str());
}
