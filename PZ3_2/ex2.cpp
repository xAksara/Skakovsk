#include <stdio.h>
#include <iostream>

using namespace std;

void zarplata (char* s, bool is_scien=0, int days=24, float rascenka=30);

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    zarplata ("prep1");
    //работал 24 дня по 3Ø.5 руб/день
    zarplata ("prep2", true, 26);
    //работал 26 дней по 3Ø.5 руб/день
    zarplata ("prep3", false, 24, 41);
    //24 дня по 41 руб/день
    cout<< "Желаю успехов" << endl;
    return 0;
}

void zarplata (char* s, bool is_scien, int days, float rascenka)
{
    printf("%s заработал %f рублей\n", s, days*rascenka*(1 + is_scien/2.0));
}