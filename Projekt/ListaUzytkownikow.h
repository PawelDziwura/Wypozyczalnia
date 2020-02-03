#pragma once
#include "Wypozyczalnia.h"
#include "Uzytkownik.h"
#include <iostream>
using namespace std;

class ListaUzytkownikow
{
private:
	Uzytkownik* dane;
	ListaUzytkownikow* next;
	ListaUzytkownikow* head;
public:
	ListaUzytkownikow();
	~ListaUzytkownikow();
	void dodajUzytkownika();
	void pokazListe();
	void zapiszUzytkownikow();
	void listaSprzetuUzytkownika();
	Uzytkownik* zwroc(int);
	friend class Wypozyczalnia;
};