#include "calculator_secure.h"
#include <iostream>
double vw::math::calculator_secure::add(double a, double b) const
{
    std::cout << "Du kommst hier rein" << std::endl;
    return calculator_.add(a, b);
}


double vw::math::calculator_secure::sub(double a, double b) const
{
    std::cout << "Du kommst hier rein" << std::endl;
    return calculator_.sub(a, b);
}

