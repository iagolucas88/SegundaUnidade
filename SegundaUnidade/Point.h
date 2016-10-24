#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(float px = 0, float py = 0);
        ~Point();
        void setX(float px);
        void setY(float py);
        void setXY(float px, float py);
        float getX();
        float getY();
        Point addp(Point p);
        Point subp(Point p);
        float norma();
        Point translata(float a, float b);
        void imprimir();

    private:
        float x,y;
};

#endif // POINT_H
