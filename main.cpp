#include "TwoChainz.h"

int main() {
    TwoChainz bChain = TwoChainz();

    cout << "Mining block 1..." << endl;
    bChain.AddChain(Node(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddChain(Node(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddChain(Node(3, "Block 3 Data"));

    cout << "Mining block 4..." << endl;
    bChain.AddChain(Node(4, "Block 4 Data"));

    cout << "Mining block 5..." << endl;
    bChain.AddChain(Node(5, "Block 5 Data"));

    return 0;
}
