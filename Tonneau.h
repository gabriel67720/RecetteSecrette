#pragma once
using namespace std;
#include  <iostream>

class Tonneau
{
private:
	int contenance, contenu;

public:
	void remplir();
	void vider();
	void transferer(Tonneau dest);
	void afftonneau();
	int getContenu();
	int getContenant();
	Tonneau(int capacite);
	void caparestante();


};

