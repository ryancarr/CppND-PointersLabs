#include <iostream>

using namespace std;

int main ()
{
    int    variable1;
    double variable2;

    int    &refVar1 = variable1;
    double &refVar2 = variable2;

    cout << "refVar1: " << refVar1 << endl;
    cout << "refVar2: " << refVar2 << endl;

    variable1 = 5;
    variable2 = 10.5;

    cout << "refVar1: " << refVar1 << endl;
    cout << "refVar2: " << refVar2 << endl;

   return 0;
}