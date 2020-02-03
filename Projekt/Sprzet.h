#pragma once
#include <iostream>
using namespace std;
class Sprzet
{
private:
	double Cena;
	string Nazwa;
	string Rodzaj;
public:
	Sprzet();
	~Sprzet();
	double getCena();
	virtual string getNazwa();
	virtual string getRodzaj();
	virtual string opis() = 0;
	friend class ListaSprzetu;
};