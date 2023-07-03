#include <iostream>
#include<locale.h>
#include "klasa.h"
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
int main() {
    double x, y;
    bool p;
    setlocale(LC_ALL, "");
    autor();
    cout << "Wpisz pierwsza liczbę zepoloną(część rzeczywista): ";
    cin >> x;
    cout << "(Część urojona): ";
    cin >> y;
    Tzespol pierwsza(x, y);
    Tzespol kopia(x, y);
    cout << "Wpisz drugą liczbę zepoloną(część rzeczywista): ";
    cin >> x;
    cout << "(Część urojona): ";
    cin >> y;
    Tzespol druga(x, y);
    pierwsza += druga;
    cout << "Wynik dodawania: ";
    pierwsza.wyświetl();
    pierwsza = kopia;
    pierwsza -= druga;
    cout << "Wynik odejmowania: ";
    pierwsza.wyświetl();
    pierwsza = kopia;
    pierwsza *= druga;
    cout << "Wynik mnożenia: ";
    pierwsza.wyświetl();
    pierwsza = kopia;
    pierwsza /= druga;
    cout << "Wynik dzielenia: ";
    pierwsza.wyświetl();
    pierwsza = kopia;
    if (pierwsza == druga) {
        cout << "Liczby zespolone sa równe" << endl;
    }
    else {
        cout << "Liczby zespolone nie sa równe" << endl;
    }
    if (pierwsza != druga) {
        cout << "Liczby zespolone są różne" << endl;
    }
    else {
        cout << "Liczby zespolone nie są różne" << endl;
    }
    system("pause");
    return 0;
}