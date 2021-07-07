#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

#include "AdaptiveIntegrator.hpp"

struct func_with_parameters {
  double p1;
  double p2;

  func_with_parameters(double p1_, double p2_) : p1(p1_), p2(p2_) {}

  double operator()(const double x)
  {
    return x*x*x + p1*x*x + p2*x;
  }

};
int main()
{
   func_with_parameters func(2., 4.);

   AdaptiveIntegrator<func_with_parameters> test;
   cout << test.integrate(func, 0., 1., 1.e-8) << endl;
   return 0; 
}


