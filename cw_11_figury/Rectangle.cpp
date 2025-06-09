
#include "Rectangle.h"

Rectangle::Rectangle(string name, float a, float b) : Figure(name)
{
    m_a = a;
    m_b = b;
}

float Rectangle::Area() const
{
    return m_a * m_b;
}

float Rectangle::Perimeter() const
{
    return 2 * m_a + 2 * m_b;
}

void Rectangle::Info() const
{
    cout << "Rectangle: " << Name() << endl;
    cout << "Dimensions: " << m_a << " x " << m_b << endl;
    cout << "Area: " << m_a * m_b << endl;
    cout << "Perimeter: " << 2 * m_a + 2 * m_b << endl;
}