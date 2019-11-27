#pragma once
#include "Utils.h"
class Angajat {
protected:
	string nume;
	int zile_concediu;
public:
	Angajat();
	Angajat(string _nume, int _zile_concediu);
	Angajat(const Angajat& r);
	string getNume();
	void setNume(string s);
	virtual int pSalariu() { return 0; }
	void operator = (const Angajat& D);
	virtual ~Angajat() {};
};