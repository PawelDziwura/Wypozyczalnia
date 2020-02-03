#pragma once
#include "Sprzet.h"
#include <iostream>
using namespace std;

Sprzet::Sprzet()
{
}


Sprzet::~Sprzet()
{
}

double Sprzet::getCena() {
	return Cena;
}

string Sprzet::getNazwa() {
	return Nazwa;
}

string Sprzet::getRodzaj()
{
	return Rodzaj;
}
