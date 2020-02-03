#pragma once
#include "Pilka.h"



Pilka::Pilka()
{
	Przeznaczenie = "xD";
}

Pilka::Pilka(string Przrznaczenie)
{
	this->Przeznaczenie = Przeznaczenie;
}

Pilka::~Pilka()
{
}

string Pilka::opis()
{
	return getNazwa() + " " + Przeznaczenie;
}