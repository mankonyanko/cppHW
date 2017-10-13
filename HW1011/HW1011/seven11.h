#include <iostream>
using namespace std;

class Car
{
private:
	int gasolinGauge;
public:
	Car()
	{
		gasolinGauge = 100;
	}

	int GetGasGauge()
	{
		return gasolinGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar()
	{
		electricGauge = 220;
	}
	int GetElectricGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar()
	{
		waterGauge = 1200;
	}

	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElectricGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};