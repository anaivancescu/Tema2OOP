#pragma once
#include "Utils.h"
#include "Angajat.h"
#include "Nedeterminate.h"
#include "Determinate.h"

class Administrator : public Nedeterminate {
    int sectie = 0;
public:
    Administrator() {};
    Administrator(const Administrator& r);
    Administrator(string _nume, int _zile_concediu, int _salariufix, int _vechime, int _sectie) :
        Nedeterminate(_nume, _zile_concediu, _salariufix, _vechime), sectie(_sectie) {}

    ~Administrator() {};
    friend ostream& operator << (ostream& os, const Administrator& dt);
    friend istream& operator >> (istream& os, Administrator& dt);
    void operator = (const Administrator& D);
};
