#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(float px, float py)
{
    //cout << "Construtor\n";
    x = px; y = py;
}

Point::~Point()
{
    //cout << "Destrutor\n";
}

void Point::setX(float px)
{
    x = px;
}

void Point::setY(float py)
{
    y = py;
}

void Point::setXY(float px, float py)
{
    x = px, y = py;
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

Point Point::addp(Point p)
{
    Point addnovo;
    addnovo.setXY(x + p.getX(), y + p.getY());
    return addnovo;
}

Point Point::subp(Point p)
{
    Point addnovo;

    addnovo.setXY(x - p.getX(), y - p.getY());
    return addnovo;
}

float Point::norma()
{
    return(sqrt(x*x + y*y));
}

Point Point::translata(float a, float b)
{
    Point addnovo;
    addnovo.setXY(x+a,y+b);
    return addnovo;
}

void Point::imprimir()
{
    cout << "(" << x << ", " << y << ")" << endl;
}
