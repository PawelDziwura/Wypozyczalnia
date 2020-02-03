#pragma once
#include "Uzytkownik.h"
#include "ListaUzytkownikow.h"
#include <iostream>
using namespace std;

class Wypozyczalnia
{
private:
	Uzytkownik* uzytkownik;
	ListaUzytkownikow* Uzytkownicy;
	Sprzet* stanWypozyczalni;
public:
	Wypozyczalnia();
	~Wypozyczalnia();
	void wypozycz();
	void dodajSprzet();
	void dodajUzytkownika();
	void pokazUzytkownikow();
	friend class ListaUzytkownikow;
};
