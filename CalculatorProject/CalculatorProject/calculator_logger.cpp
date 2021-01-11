#include "calculator_logger.h"
#include <iostream>
double vw::math::calculator_logger::add(double a, double b) const
{
    std::cout << "Add wurde gerufen" << std::endl;
    return calculator_.add(a, b);
}

double vw::math::calculator_logger::sub(double a, double b) const
{
    std::cout << "Sub wurde gerufen" << std::endl;
    return calculator_.sub(a, b);
}
