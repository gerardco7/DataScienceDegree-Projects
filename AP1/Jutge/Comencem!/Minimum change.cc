#include <iostream>
using namespace std;

// c<100
int main()
{
    int e, c;
    cin >> e >> c;

    cout << "Banknotes of 500 euros: " << e / 500 << endl;
    cout << "Banknotes of 200 euros: " << (e % 500) / 200 << endl;
    cout << "Banknotes of 100 euros: " << ((e % 500) % 200) / 100 << endl;
    cout << "Banknotes of 50 euros: " << (((e % 500) % 200) % 100) / 50 << endl;
    cout << "Banknotes of 20 euros: " << ((((e % 500) % 200) % 100) % 50) / 20 << endl;
    cout << "Banknotes of 10 euros: " << (((((e % 500) % 200) % 100) % 50) % 20) / 10 << endl;
    cout << "Banknotes of 5 euros: " << ((((((e % 500) % 200) % 100) % 50) % 20) % 10) / 5 << endl;
    cout << "Coins of 2 euros: " << (((((((e % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 2 << endl;
    cout << "Coins of 1 euro: " << ((((((((e % 500) % 200) % 100) % 50) % 20) % 10) % 5) % 2) / 1 << endl;
    cout << "Coins of 50 cents: " << c / 50 << endl;
    cout << "Coins of 20 cents: " << (c % 50) / 20 << endl;
    cout << "Coins of 10 cents: " << ((c % 50) % 20) / 10 << endl;
    cout << "Coins of 5 cents: " << (((c % 50) % 20) % 10) / 5 << endl;
    cout << "Coins of 2 cents: " << ((((c % 50) % 20) % 10) % 5) / 2 << endl;
    cout << "Coins of 1 cent: " << (((((c % 50) % 20) % 10) % 5) % 2) / 1 << endl;
}
