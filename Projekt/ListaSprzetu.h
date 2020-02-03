#pragma once
#include "Wypozyczalnia.h"
#include "Sprzet.h"
#include <iostream>
#include <string>
using namespace std;

class ListaSprzetu
{
private:
	Sprzet* dane;
	ListaSprzetu* next;
	ListaSprzetu* head;
public:
	ListaSprzetu();
	~ListaSprzetu();
	void dodajSprzet();
	void pokazListeSprzetu();
	int getLength();
	friend class Wypozyczalnia;
};


