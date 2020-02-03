#pragma once
#include "Sprzet.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Uzytkownik
{
private:
	string Imie;
	string Nazwisko;
	vector<Sprzet*> PrzypisaneSprzety;
public:
	Uzytkownik();
	~Uzytkownik();
	void wypozycz();
	friend class Wypozyczalnia;
	friend class ListaUzytkownikow;
};