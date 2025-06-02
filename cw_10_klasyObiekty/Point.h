//
// Created by Student on 02.06.2025.
//

#ifndef INC_1_POINT_H
#define INC_1_POINT_H

#endif //INC_1_POINT_H
#pragma once
#include <string>

class Point
{
private:
    std::string m_name;
    double m_x;
    double m_y;
public:
    void setName(const std::string& name);
    void setXY(double x, double y);
    double getX();
    double getY();
    void show();
};