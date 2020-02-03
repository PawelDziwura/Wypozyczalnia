#pragma once
#include "Uzytkownik.h"
#include "ListaUzytkownikow.h"
#include "ListaSprzetu.h"
#include <iostream>
using namespace std;

class Wypozyczalnia
{
private:
	Uzytkownik* uzytkownik;
	ListaUzytkownikow* Uzytkownicy;
	ListaSprzetu* sprzet;
	Sprzet* stanWypozyczalni;
public:
	Wypozyczalnia();
	~Wypozyczalnia();
	void wypozycz();
	void dodajSprzet();
	void pokazListeSprzetu();
	void dodajUzytkownika();
	void pokazUzytkownikow();
	void zapiszUzytkownikow();
	int getLength();
	Uzytkownik* zwroc();
	//friend class Uzytkownik;
};
