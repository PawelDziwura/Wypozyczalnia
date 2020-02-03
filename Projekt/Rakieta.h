#pragma once
#include "Sprzet.h"
#include <iostream>
using namespace std;

class Rakieta :public Sprzet
{
private:
	string Typ;
	double Waga;
public:
	Rakieta();
	Rakieta(string, double);
	~Rakieta();
	string opis() override;
};