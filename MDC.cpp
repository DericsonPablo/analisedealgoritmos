#include <iostream>

using namespace std;


int main(){

    int x, y, z , mdc, dividendo, divisor;

    cout << "Numero x: " <<endl;
    cin >> x;
    cout << "Numero y: " << endl;
    cin >> y;

    dividendo = x;
    divisor = y;

    while(z!=0){

        z = dividendo % divisor;
        dividendo = divisor;
        divisor = z;

    }
            mdc = dividendo;
            cout << "mdc " << x << "," << y << " = " << mdc << endl;


    return 0;
}



