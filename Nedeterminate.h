#pragma once
#include "Utils.h"
#include "Angajat.h"

class Nedeterminate : public Angajat {
protected:
	    int salariufix = 0, vechime = 0;
public:
    Nedeterminate() {};
    Nedeterminate(string _nume, int _zile_concediu, int _salariufix, int _vechime) :
        salariufix(_salariufix), vechime(_vechime), Angajat(_nume, _zile_concediu) {
    };
	int pSalariu() {
		return salariufix;
	}
    friend ostream& operator << (ostream& os, const Nedeterminate& dt);
    friend istream& operator >> (istream& os, Nedeterminate& dt);
    void operator = (const Nedeterminate& D);
    ~Nedeterminate() {};	
};
