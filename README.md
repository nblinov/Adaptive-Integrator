Gauss-Lobatto Adaptive Integrator
===================

A C++ port of the adaptive quadrature algorithm by [Gander and Gautschi](http://link.springer.com/article/10.1023%2FA%3A1022318402393).

Usage
-------------------
A sample example file,`example.cpp`, is provided. Simplify include the header 
`AdaptiveIntegrator.hpp` in your code:
    #include "AdaptiveIntegrator.hpp"
Then create an integrator object specialized for the type of functional 
you wish to integrate. In the simplest case this is just a normal function 
with signature `double(double)`, so the declaration looks like
    AdaptiveIntegrator<double(double)> test
Finally to integrate your function, `func`, invoke the `integrate` method 
with integral bounds `a` and `b` and desired tolerance `tol`:
    test.integrate(func, a, b, tol)
