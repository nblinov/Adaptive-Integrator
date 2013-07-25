#ifndef ADAPTIVEINTEGRATOR_HPP_
#define ADAPTIVEINTEGRATOR_HPP_

#include "Integrator.hpp"
#include <cmath>
using std::sqrt;
#include <limits>
using std::numeric_limits;

template <class T>
class AdaptiveIntegrator : Integrator<T> {

private:

public:
    AdaptiveIntegrator();

    void set_tol(double tol);

    double integrate(T &func, const double a, const double b, const double tol);

    double adaptlob(T &func, const double a, const double b, const double fa,
         const double fb, const double is);
};


#endif // ADAPTIVEINTEGRATOR_HPP_
