#include <iostream>
#include <math.h>

using std::cin;
using std::cos;
using std::cout;
using std::endl;
using std::sin;

void trigonometry(double *_sin, double *_cos, double angle)
{
    *_sin = sin(angle);
    *_cos = cos(angle);
}

int main()
{
    double angle, _cos, _sin;

    cout << "Please enter an angle in radians ";
    cin >> angle;

    trigonometry(&_sin, &_cos, angle);

    cout << "Angle : " << angle << endl;
    cout << "Cosine: " << _cos << endl;
    cout << "Sine  : " << _sin << endl;

    return 0;
}