#pragma once
#include "ListaUzytkownikow.h"
#include "Wypozyczalnia.h"
#include "Uzytkownik.h"
#include "Error.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ListaUzytkownikow::ListaUzytkownikow()
{
}


ListaUzytkownikow::~ListaUzytkownikow()
{
}

void ListaUzytkownikow::dodajUzytkownika()
{
	Uzytkownik* nowyUzytkownik = new Uzytkownik();
	bool exit = false;
	int i;
	while (exit == false)
	{
		cout << "Uzupelnij dane nowego uzytkownika:" << endl;
		cout << "Podaj imie." << endl;
		cin >> nowyUzytkownik->Imie;
		i = (nowyUzytkownik->Imie).length();
		for (int j = 0; j < i; j++) {
			if (nowyUzytkownik->Imie[j] >= 65 && nowyUzytkownik->Imie[j] <= 90 || nowyUzytkownik->Imie[j] >= 97 && nowyUzytkownik->Imie[j] <= 122) {
				exit = true;
				continue;
			}
			else {
				cout << "Bledne imie! Sprobuj ponownie." << endl;
				exit = false;
				break;
			}

		}
		if (exit = true) {
			exit = false;
			cout << "Podaj nazwisko." << endl;
			cin >> nowyUzytkownik->Nazwisko;
			i = (nowyUzytkownik->Nazwisko).length();

			for (int k = 0; k < i; k++) {
				if (nowyUzytkownik->Nazwisko[k] >= 65 && nowyUzytkownik->Nazwisko[k] <= 90 || nowyUzytkownik->Nazwisko[k] >= 97 && nowyUzytkownik->Nazwisko[k] <= 122) {
					exit = true;
					continue;
				}
				else {
					cout << "Bledne nawisko! Sprobuj ponownie." << endl;
					exit = false;
					break;
				}
			}
		}	
	}

	cout << "Dane uzytkownika zostaly zapisane w systemie." << endl << endl;
	//nowyUzytkownik->PrzypisaneSprzety = NULL;

	if (head == NULL) {
		dane = nowyUzytkownik;
		next = NULL;
		head = this;
	}
	else {
		ListaUzytkownikow* curHead = head;
		ListaUzytkownikow *temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		ListaUzytkownikow* newElem = new ListaUzytkownikow();
		newElem->dane = nowyUzytkownik;
		newElem->next = NULL;
		newElem->head = curHead;
		temp->next = newElem;
		//delete temp;
	}
}

void ListaUzytkownikow::pokazListe()
{
	cout << endl << "-------Lista uzytkownikow-------" << endl;
	int i = 1;
	int j = 0;
	ListaUzytkownikow* temp = head;
	if (temp == NULL) {
		throw new Error("Lista jest pusta!");
	}
	else {
		while (temp->next != NULL) {
			cout << i << ". Imie: " << temp->dane->Imie << ", Nazwisko: " << temp->dane->Nazwisko << endl;
			/*if(temp->dane->PrzypisaneSprzety[0] = NULL)
				cout << "xd";
			else {
				while (temp->dane->PrzypisaneSprzety[j + 1] != NULL) {
					cout << temp->dane->PrzypisaneSprzety[j];
					j++;
				}
			}*/
			i++;
			temp = temp->next;
		}
		cout << i << ". Imie: " << temp->dane->Imie << ", Nazwisko: " << temp->dane->Nazwisko << endl;
	}
}

void ListaUzytkownikow::zapiszUzytkownikow()
{
	fstream plik;
	string FileName;
	cout << "Podaje nazwe pliku do ktorego chcesz zapisac dane (NazwaPliku): ";
	cin >> FileName;
	FileName = FileName + ".txt";
	plik.open(FileName, ios::out);
	if (plik.good() == true) {
		plik << "-------Lista uzytkownikow.-------" << endl;
		int i = 1;
		ListaUzytkownikow* temp = head;
		while (temp->next != NULL) {
			
			plik << i << ". Imie: " << temp->dane->Imie << ", Nazwisko: " << temp->dane->Nazwisko << endl;
			i++;
			temp = temp->next;
		}
		plik << i << ". Imie: " << temp->dane->Imie << ", Nazwisko: " << temp->dane->Nazwisko << endl;
		cout << "Lista uzytkownikow zostala zapisana w pliku: " << FileName << endl;
	}
}

void ListaUzytkownikow::listaSprzetuUzytkownika()
{

}

Uzytkownik* ListaUzytkownikow::zwroc(int nrUzytkownika)
{
	int i = 0;
	Uzytkownik* nowyUzytkownik = new Uzytkownik;
	//ListaUzytkownikow* curHead = head;
	ListaUzytkownikow *temp = head;
	while (i != (nrUzytkownika - 1)) {
		temp = temp->next;
		i++;
	}
	nowyUzytkownik = temp->dane;
	return nowyUzytkownik;
}
