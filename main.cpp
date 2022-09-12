#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // "_" hiányzik a változónévből
    std::cout << '1-100 ertekek duplazasa' // nincs sorvégi zárás
    for (int i = 0;) // hibás ciklus megadása, több elem hiánya
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  // rossz felsőhatár
    {
        std::cout << "Ertek:" // eredménykiírás nem történik meg, nincs sorvégi zárás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // inicializálás nélküli változó megadása
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
