#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

#include "AdaptiveIntegrator.hpp"

double func(const double);
int main()
{
   AdaptiveIntegrator<double (const double)> test;
   cout << test.integrate(func, 0., 1., 1.e-8) << endl;
   return 0; 
}
double func(const double x)
{

    return x*x*x;
}


