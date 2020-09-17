#include "datum.h"
#include "kfz.h"

#include <iostream>

using namespace std;

void print_line()
{
    cout << "---------------------------" << endl;
}

int main(int argc, char *argv[])
{
    cout << "Hello Car!" << endl;

    Datum d1, d2(17,9,2020);

    cout << d1 << endl;
    cout << d2 << endl;

    print_line();

    KFZ k("Honda", Datum(23,7,2015), Datum(23,7,2018));

    cout << "TUEV " << k.isTuevOk(d2) << endl;
    cout << k << endl;

    cout << endl << "Add 3 years Tuev" << endl;
    k+=3;
    cout << "TUEV " << k.isTuevOk(d2) << endl;
    cout << k << endl;


    PKW p1("Toyota", Datum(11,4,2015), Datum(11,4,2021), 5);
    PKW p2("Honda", Datum(23,7,2015), Datum(23,7,2022), 5);
    PKW p3("Suzuki", Datum(13,8,2012), Datum(18,11,2020), 5);
    PKW p4("Kia", Datum(24,1,2019), Datum(17,4,2023), 4);
    PKW p5("BMW", Datum(9,10,2017), Datum(9,2,2021), 2);

    PKW liste[5] = {p1,p2,p3,p4,p5};

    print_line();
    print_line();

    for (int i=0; i<5; ++i) {
        cout << liste[i];
        print_line();
    }

    print_line();
    // sort
    sortByTuev(liste, 5);
    for (int i=0; i<5; ++i) {
        cout << liste[i];
        print_line();
    }




    return 0;
}
