#include "pch.h" 
#include <utility>
#include <limits.h>
#include "MathLibrary.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;
double PrecisionPoint(long double c, int n) {
    stringstream myString;
    long double dValue;
    long int pow10 = pow(10, n);
    c = floor(pow10 * c) / pow10;
    myString << fixed << setprecision(n) << c;
    myString >> dValue;
    return dValue;
}
