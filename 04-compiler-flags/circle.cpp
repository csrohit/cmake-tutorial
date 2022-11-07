
#include "circle.hpp"
#define _USE_MATH_DEFINES
#include<cmath>

namespace geometry::area
{
    double circle(double radius)
    {
        return M_PI * std::pow(radius, 2);
    }

}