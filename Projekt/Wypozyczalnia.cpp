#pragma once
#include "Wypozyczalnia.h"
#include "Uzytkownik.h"
#include "Sprzet.h"
#include "Pilka.h"
#include "Error.h"
#include <iostream>
#include <string>
using namespace std;

Wypozyczalnia::Wypozyczalnia()
{
	Uzytkownicy = new ListaUzytkownikow();
	sprzet = new ListaSprzetu();
}


Wypozyczalnia::~Wypozyczalnia()
{
}

void Wypozyczalnia::wypozycz()
{
	int nrUzyrkownika = 0;
	Uzytkownicy->pokazListe();
	cout << endl << "ktoremu uzytkownikowi z listy chcesz wypozyczyc sprzet(podaj numer)?" << endl;
	cout << "wybor: ";
	cin >> nrUzyrkownika;
	uzytkownik = Uzytkownicy->zwroc(nrUzyrkownika);
	//cout << uzytkownik->Imie;
	uzytkownik->wypozycz();
}

void Wypozyczalnia::dodajSprzet()
{
	sprzet->dodajSprzet();
}

void Wypozyczalnia::pokazListeSprzetu()
{
	sprzet->pokazListeSprzetu();
}

void Wypozyczalnia::dodajUzytkownika()
{
	if (Uzytkownicy != NULL) {
		Uzytkownicy->dodajUzytkownika();
	}
}

void Wypozyczalnia::pokazUzytkownikow()
{
	Uzytkownicy->pokazListe();
}

void Wypozyczalnia::zapiszUzytkownikow()
{
	string wybor;
	bool exit = false;
	Uzytkownicy->pokazListe();
	cout << "Czy chcesz zapisac wyswietlona liste? (Tak/Nie)" << endl;
	while (exit == false) {
		cout << "Wybor: ";
		cin >> wybor;
		if (wybor == "Tak" || wybor == "tak" || wybor == "TAK") {
			Uzytkownicy->zapiszUzytkownikow();
			exit = true;
		}
		else if (wybor == "Nie" || wybor == "nie" || wybor == "NIE") {
			cout << "Lista nie zostala zapisana." << endl;
			exit = true;
		}
		else
			cout << "Nieprawidlowy wybor! Sprobuj ponownie." << endl;
	}
}

int Wypozyczalnia::getLength()
{
	return sprzet->getLength();
}

Uzytkownik * Wypozyczalnia::zwroc()
{
	return nullptr;
}
