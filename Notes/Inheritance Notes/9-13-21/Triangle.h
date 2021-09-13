#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle
{
private:
    double m_base;
    double m_height;
public:
    Triangle(double base, double hight);
    virtual double area()const;
};
#endif

