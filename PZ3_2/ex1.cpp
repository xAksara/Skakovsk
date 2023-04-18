#include <stdio.h>
#include <iostream>

using namespace std;

void zarplata (char* s, int days=24, float rascenka=30);

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    zarplata ("Kum");
    //работал 24 дня по 3Ø.5 руб/день
    zarplata ("Brat", 26);
    //работал 26 дней по 3Ø.5 руб/день
    zarplata ("Cvat", 24, 41);
    //24 дня по 41 руб/день
    cout<< "Желаю успехов" << endl;
    return 0;
}

void zarplata (char* s, int days, float rascenka)
{
    printf("%s заработал %f реблей\n", s, days*rascenka);
}