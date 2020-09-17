#ifndef DATUM_H
#define DATUM_H

#include <iostream>

class Datum
{
private:
    int tag;
    int monat;
    int jahr;
public:
    Datum(int tag=1, int monat=1, int jahr=1970);
    ~Datum() {}

    int getTag();
    int getMonat() ;
    int getJahr() ;
    void setTag(int tag);
    void setMonat(int monat);
    void setJahr(int jahr);

    friend std::ostream& operator<< (std::ostream& os, Datum& dt);
    friend int compareDatum(Datum& d1, Datum& d2);
};

#endif // DATUM_H
