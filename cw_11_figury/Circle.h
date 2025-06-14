
#ifndef INHERITANCE_CIRCLE_H
#define INHERITANCE_CIRCLE_H

#include "Figure.h"

class Circle : public Figure
{
private:
    float m_r;
    //float m_b;
    float m_area;
    float m_perimeter;

public:
    Circle(string name = "", float r = 0);
    virtual ~Circle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};


#endif //INHERITANCE_CIRCLE_H
