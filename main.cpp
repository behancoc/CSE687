#include <iostream>
#include "Square.h"

using namespace std;

int main() {
    Square mySquare(3, 3);
    Square copy = mySquare;
    cout << mySquare.getHeight() << endl;
    cout << copy.getHeight() << endl;

    copy.setHeight(100);

    cout << "mySquare get height" << mySquare.getHeight() << endl;
    cout << "copy get height " << copy.getHeight() << endl;
    return 0;
}

