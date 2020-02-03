#pragma once
#include "Uzytkownik.h"
#include "Rakieta.h"
#include "Pilka.h"
#include "ListaSprzetu.h"



Uzytkownik::Uzytkownik()
{
	//PrzypisaneSprzety = new vector<Sprzet*>();
}


Uzytkownik::~Uzytkownik()
{
}

void Uzytkownik::wypozycz()
{
	Sprzet *a;
	string wybor;
	bool decyzja = false;
	while (decyzja == false) {
		cout << "Jaki sprzêt chcesz wypozyczyc? " << endl;
		cout << "[1] Pilka" << endl;
		cout << "[2] Raketa" << endl;
		cout << "---------------------------" << endl;
		cout << "[0] Powrot" << endl;
		cout << endl << "Wybor: ";
		cin >> wybor;
		if (wybor == "1") {
			cout << "Wybrano pilke." << endl;
			a = new Pilka();
			//cout << "xd";
			PrzypisaneSprzety.push_back(a);
			decyzja = true;
		}
		else if (wybor == "2") {
			cout << "Wybrano dodawanie rakiete." << endl;
			a = new Rakieta;
			PrzypisaneSprzety.push_back(a);
			decyzja = true;

		}
		else if (wybor == "0")
			break;
		else {
			cout << "Nieprawidlowy wybor! Sprobuj ponownie." << endl;
			system("pause");
			system("cls");
		}
	}
}