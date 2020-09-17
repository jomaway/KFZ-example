#ifndef KFZ_H
#define KFZ_H

#include <iostream>
#include "datum.h"




class KFZ
{
private:
    std::string hersteller;
    Datum erstzulassung;
    Datum tuev;

public:
    KFZ(std::string h, Datum ez, Datum tuev) :
        hersteller(h), erstzulassung(ez), tuev(tuev) {}

    KFZ() : hersteller("unbekannt") {}

    Datum& getTuev(){
        return this->tuev;
    }

    KFZ& operator+= (int zeit);
    friend std::ostream& operator<< (std::ostream& os, KFZ& kfz);
    bool isTuevOk(Datum &dt);
};


class PKW : public KFZ
{
private:
    int sitze;
public:
    PKW(std::string h, Datum ez, Datum tuev, int sitze) :
        KFZ(h,ez,tuev), sitze(sitze){}

    PKW() : sitze(0) {}

    friend std::ostream& operator<< (std::ostream& os, PKW& pkw);
};

void sortByTuev(PKW p[], int len);

#endif // KFZ_H
