//
//  MyMath.cpp
//  StudyCppX
//
//  Created by kook on 2021/05/02.
//

#include "MyMath.hpp"

void MyMath::start() {
    
    cout << "abs(x) : " << abs(numberX) << "\t(Returns the absolute value of x)" << endl;
    cout << "acos(x) : " << acos(numberX) << "\t(Returns the arccosine of x)" << endl;
    cout << "asin(x) : " << asin(numberX) << "\t(Returns the arcsine of x)" << endl;
    cout << "atan(x) : " << atan(numberX) << "\t(Returns the arctangent of x)" <<endl;
    cout << "cbrt(x) : " << cbrt(numberX) << "\t(Returns the cube root of x)" << endl;
    cout << "ceil(x) : " << ceil(10.2) << "\t(Returns the value of x rounded up to its nearest integer)" << endl;
    cout << "cos(x)  : " << cos(numberX) << "\t(Returns the cosine of x)" << endl;
    cout << "cosh(x) : " << cosh(numberX) << "\t(Returns the hyperbolic cosine of x)" << endl;
    cout << "exp(x)  : " << exp(-1) << "\t(Returns the value of E^x)" << endl;
    cout << "expm1(x) : " << expm1(1) << "\t(Returns e^x -1)" << endl;
    cout << "fabs(x) : " << fabs(numberX) << "\t(Returns the absolute value of a floating x)" << endl;
    cout << "fdim(x,y) : " << fdim(100, -50) << "\t(Returns the positive difference between x and y) " << endl;
    cout << "floor(x) : " << floor(55.7) << "\t(Returns the value of x rounded down to its nearest integer)" << endl;
    cout << "hypot(x,y) : " << hypot(6, 8) << "\t(Returns sqrt(x^2 + y^2) without intermediate overflow or underflow)"<< endl;
    cout << "fma(x,y,z) : " << fma(2,3,4) << "\t(Returns x*y+z without losing precision)" << endl;
    cout << "fmax(x,y) : " << fmax(numberX, numberY) << "\t(Returns the highest value of a floating x and y)" << endl;
    cout << "fmin(x,y) : " << fmin(numberX, numberY) << "\t(Returns the lowest value of a floating x and y)" << endl;
    cout << "fmod(x,y) : " << fmod(20, 3) << "\t(Returns the floating point remainder of x/y)" << endl;
    cout << "pow(x,y) : " << pow(10, 3) << "\t(Returns the value of x to the power of y)" << endl;
    cout << "sin(x) : " << sin(45) << "\t(Returns the sine of x, x is radians)" << endl;
    cout << "tan(x) : " << tan(45) << "\t(Returns the tangent of an angle)" << endl;
    cout << "tanh(x) : " << tanh(20) << "\t(Returns the hyperbolic tangent of a double value)" << endl;
    
}
