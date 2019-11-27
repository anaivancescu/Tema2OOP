#pragma once
#include "Utils.h"
#include "Angajat.h"
#include "Nedeterminate.h"
#include "Determinate.h"
#include "Administrator.h"
#pragma once
#include "Utils.h"
#include <vector>
class ManagementAng
{ 
	vector<Angajat*> Vangajati;
	int nrAngajati;
public:
	ManagementAng();
	ManagementAng(int _nrAngati);
	friend ostream& operator << (ostream& os, const ManagementAng& dt);
	friend istream& operator >> (istream& os, ManagementAng& dt);
	~ManagementAng();
};

