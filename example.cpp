#include <cmath>
#include <iostream>
using std::cout;

using std::endl;
#include "GGAdaptiveIntegrator.hpp"

double func(const double);
int main()
{
   Adapt<double (const double)> test(1.e-8);
   cout << test.integrate(func, 0., 1.) << endl;
   return 0; 
}
double func(const double x)
{

    return x*x;
}


