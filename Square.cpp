//
// Created by brand on 5/31/2020.
//

#include "Square.h"

Square::Square(int length_val, int height_val) : length{length_val} , height{height_val} {}

Square::Square(const Square &cube)
{
    setHeight(cube.height);
    setLength(cube.length);
}


int Square::getHeight()
{
    return this->height;
}
int Square::getLength()
{
    return this->length;
}
void Square::setHeight(int n)
{
    height = n;
}
void Square::setLength(int n)
{
    length = n;
}