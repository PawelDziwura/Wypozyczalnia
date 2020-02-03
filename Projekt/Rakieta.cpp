#pragma once
#include "Rakieta.h"
#include <string>


Rakieta::Rakieta()
{
}

Rakieta::Rakieta(string Typ, double Waga)
{
	this->Typ = Typ;
	this->Waga = Waga;
}

Rakieta::~Rakieta()
{
}

string Rakieta::opis()
{
	return getNazwa() + " " + Typ + " " + to_string(Waga);
}