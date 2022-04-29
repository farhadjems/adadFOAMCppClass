#include <iostream>

using namespace std;

struct idealGas
{
    double temperature;
    double density;
    double pressure;
    double R = 8.314;
    void relation();
    // {
    //     pressure = temperature * density * R;
    // }
};

void idealGas::relation()
{
    pressure = temperature * density * R;
}

int main()
{
    idealGas air;
    air.temperature = 300;
    air.density = 1.2;
    air.relation();
    cout << "pressure is: " << air.pressure << endl;
}
