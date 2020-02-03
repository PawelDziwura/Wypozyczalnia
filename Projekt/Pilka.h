#pragma once
#include "Sprzet.h"
#include <iostream>
using namespace std;

class Pilka :public Sprzet
{
private:
	string Przeznaczenie;
	double Srednica;
public:
	Pilka();
	Pilka(string);
	~Pilka();
	string opis() override;
};