#include <cstdint>
#include <iostream>

using namespace std;

class Node {
    
    public:
        string sPrevHash;
        Node(uint32_t nIndexIn, const string &sDataIn);
        string GetHash();
        void MineBlock(uint32_t difficulty);

    private:
        uint32_t _nIndex;
        int64_t _nNonce;
        string _sData;
        string _sHash;
        time_t _tTime;
        string _CalculateHash() const;

};
