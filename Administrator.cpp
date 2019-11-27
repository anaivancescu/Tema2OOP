#include "Administrator.h"

Administrator::Administrator(const Administrator& r) {
    Administrator::operator=(r);
}

ostream& operator<<(ostream& os, const Administrator& dt) {
    os << static_cast <const Nedeterminate&>(dt) << endl;
    os << "sectie: " << dt.sectie;
    return os;
}
istream& operator>>(istream& os, Administrator& dt) {
    os >> static_cast <Nedeterminate&>(dt);
    os >> dt.sectie;
    return os;
}

void Administrator::operator = (const Administrator& D) {
    sectie = D.sectie;
    Nedeterminate::operator=(D);
}
