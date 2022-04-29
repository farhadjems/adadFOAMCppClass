#include <iostream>

using namespace std;

class idealGas
{
private:
    double _temperature;
    double _pressure;
    double _density;
    double _R = 8.314;
public:
    idealGas(double temperature, double density);
    idealGas();
    void relation();
    void printProperties();
    ~idealGas();
};

void idealGas::relation()
{
    _pressure = _temperature *_density *_R;
}

idealGas::idealGas()
: _temperature (273), _density(1.2)
{
    relation(); 
}

idealGas::idealGas(double temperature, double density)
{
    _temperature = temperature;
    _density = density; 
    relation();
}

void idealGas::printProperties()
{
    cout << " temperature: " << _temperature << endl;
    cout << " density: " << _density << endl;
    cout << " pressure: " << _pressure << endl;
}

idealGas::~idealGas()
{

}

int main()
{
    idealGas air;
    air.printProperties();
    idealGas waterVapor(350, 1.5);
    waterVapor.printProperties();
}