#include "Sprzet.h"
#include "Wypozyczalnia.h"
#include "Rakieta.h"
#include "Pilka.h"
#include "Error.h"
#include <string>

using namespace std;



ListaSprzetu::ListaSprzetu()
{
}


ListaSprzetu::~ListaSprzetu()
{
}

void ListaSprzetu::dodajSprzet()
{
	string wybor;
	string nazwa;
	string cena;
	Sprzet* nowySprzet = NULL;
	bool decyzja = false;
	while (decyzja == false) {
		cout << "Jaki sprzêt chcesz dodac? " << endl;
		cout << "[1] Pilka" << endl;
		cout << "[2] Raketa" << endl;
		cout << "---------------------------" << endl;
		cout << "[0] Powrot" << endl;
		cout << endl << "Wybor: ";
		cin >> wybor;

		if (wybor == "1" || wybor == "2")
		{
			if (wybor == "1") {
				cout << "Wybrano dodawanie pilki." << endl;
				nowySprzet = new Pilka();
				nowySprzet->Rodzaj = "Pilka";
			}
			else if (wybor == "2") {
				cout << "Wybrano dodawanie rakiety." << endl;
				nowySprzet = new Rakieta();
				nowySprzet->Rodzaj = "Rakieta";
			}
			decyzja = true;
			cout << "Podaj nazwe: ";
			cin >> nowySprzet->Nazwa;
			cout << "Podaj cene: ";
			cin >> nowySprzet->Cena;
			if (head == NULL) {
				dane = nowySprzet;
				next = NULL;
				head = this;
			}
			else {
				ListaSprzetu* curHead = head;
				ListaSprzetu *temp = head;
				while (temp->next != NULL)
					temp = temp->next;
				ListaSprzetu* newElem = new ListaSprzetu();
				newElem->dane = nowySprzet;
				newElem->next = NULL;
				newElem->head = curHead;
				temp->next = newElem;
				//delete temp;
			}

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

void ListaSprzetu::pokazListeSprzetu()
{
	cout << endl << "-------Lista sprzetu-------" << endl;
	int i = 1;
	ListaSprzetu* temp = head;
	if (temp == NULL) {
		throw new Error("Lista jest pusta!");
	}
	else {
		while (temp->next != NULL) {
			cout << i << ". (" << temp->dane->Rodzaj << ") Nazwa: " << temp->dane->Nazwa << ", Cena: " << temp->dane->Cena << endl;
			i++;
			temp = temp->next;
		}
		cout << i << ". (" << temp->dane->Rodzaj << ") Nazwa: " << temp->dane->Nazwa << ", Cena: " << temp->dane->Cena << endl;
	}
}

int ListaSprzetu::getLength()
{
	int ctr = 1;
	ListaSprzetu* temp = head;
	if (temp == NULL) {
		throw new Error("Lista jest pusta!");
	}
	else {
		while (temp->next != NULL) {
			ctr++;
			cout << ctr;
			temp = temp->next;
		}
	}
	return ctr;
}
