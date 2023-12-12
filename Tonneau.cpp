#include "Tonneau.h"
#include  <iostream>
using namespace std;

void Tonneau::remplir()
{
	contenu = contenance;
}

void Tonneau::vider()
{
	contenu = 0;
}

void Tonneau::transferer(Tonneau dest)
{
	
	if ()
	;
}

void Tonneau::afftonneau()
{
	cout << "Le tonneau contient :" << getContenu << "Littres" << endl;
	cout << "le tonneau peut contenir jusqu'a" << getContenant << "Littres" << endl;
}

int Tonneau::getContenu()
{
	return contenu;
}

int Tonneau::getContenant()
{
	return contenance;
}

void Tonneau::caparestante()
{
	contenance - contenu;
}
