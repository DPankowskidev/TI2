#include "Triangle.h"
#include <math.h>

Triangle::Triangle(string name, float a, float h) : Figure(name)
{
    m_a = a;
    m_h = h;
}

float Triangle::Area() const
{
    return m_a * m_h * 0.5;
}

float Triangle::Perimeter() const
{
    return 2 * sqrt(0.25 * m_a * m_a + m_h * m_h) + m_a;
}

void Triangle::Info() const
{
    cout << "Triangle: " << Name() << endl;
    cout << "Dimensions: " << "Base: " << m_a << ", Height: " << m_h << endl;
    cout << "Area: " << m_a * m_h * 0.5 << endl;
    cout << "Perimeter: " << 2 * sqrt(0.25 * m_a * m_a + m_h * m_h) + m_a << endl;
}