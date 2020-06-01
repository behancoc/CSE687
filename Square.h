//
// Created by brand on 5/31/2020.
//

#ifndef MIDTERMPREP_SQUARE_H
#define MIDTERMPREP_SQUARE_H

#include <iostream>
using std::cout;
using std::cin;


class Square {
public:
    int getLength();
    void setLength(int n);
    int getHeight();
    void setHeight(int n);


    Square();
    Square(int, int);
    Square(const Square& cube);
//    ~Square();

private:
    int length;
    int height;

};


#endif //MIDTERMPREP_SQUARE_H
