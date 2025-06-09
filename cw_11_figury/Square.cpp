

#include "Square.h"

Square::Square(string name, float a) : Figure(name)
{
    m_a = a;
    //m_area = m_a * m_a;
    //m_perimeter = 4 * m_a;
}

float Square::Area() const
{
    return m_a * m_a;
}

float Square::Perimeter() const
{
    return 4 * m_a;
}

void Square::Info() const
{
    cout << "Square: " << Name() << endl;
    cout << "Dimension: " << m_a << endl;
    cout << "Area: " << m_a * m_a << endl;
    cout << "Perimeter: " << 4 * m_a << endl;
}