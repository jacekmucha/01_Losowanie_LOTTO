#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba;

int main()
{
    Sleep(2000);
    cout << "Witaj w losowaniu!\n\n" << endl;
    Sleep(2000);
    cout << "W puli znajduje sie 49 kolejno ulozonych kul.\n\n" << endl;
    Sleep(5000);
    cout << "Komora losowania jest pusta...\a" << endl;
    Sleep(2000);
    cout << "Nastepuje zwolnienie blokady.\n\n"  << "\a" << endl;
    Sleep(5000);
    cout << "Rozpoczynamy losowanie 6 liczb.\n\n\n" << endl;
    Sleep(7000);

    srand(time(NULL));
    cout << "Wylosowane liczby to: \n\n" << endl;

    for (int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        Sleep(2000);
        cout << liczba << "\a" << endl;

    }

    cout << "\n\nZapraszamy do zgloszenia sie zwyciezcow!" << endl;

    getchar(); getchar();

    return 0;
}
