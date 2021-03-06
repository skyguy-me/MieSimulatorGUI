#ifndef UTILITIES_H
#define UTILITIES_H

#include <QTime>
#include <QCoreApplication>
#include <complex>

class utilities
{
public:
    utilities();
    ~utilities();

    void Delay();
    double ComplexAbs(std::complex<double> a);
    double ComplexAbsSquared(std::complex<double> a);
    double SimpsonsWeight (unsigned int i, unsigned int n);
};

#endif // UTILITIES_H
