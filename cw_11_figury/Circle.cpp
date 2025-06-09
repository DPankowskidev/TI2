
#include "Circle.h"
#include <math.h>

Circle::Circle(string name, float r) : Figure(name)
{
    m_r = r;
    //m_area = m_a * m_a;
    //m_perimeter = 4 * m_a;
}

float Circle::Area() const
{
    return m_r * m_r * M_PI;
}

float Circle::Perimeter() const
{
    return 2 * M_PI * m_r;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Radius: " << m_r << endl;
    cout << "Area: " << m_r * m_r * M_PI << endl;
    cout << "Perimeter: " << 2 * M_PI * m_r << endl;
}
