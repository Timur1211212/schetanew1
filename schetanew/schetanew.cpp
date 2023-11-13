#include <iostream>
#include <string>
using namespace std;

struct bank_account {
    int account_number;
    string owners_name;
    int balance;
};
void order(bank_account& p) {
    cout << "Введите номер счёта: ";
    cin >> p.account_number;
    cout << "Введите имя владельца: ";
    cin >> p.owners_name;
    cout << "Введите баланс: ";
    cin >> p.balance;
    cout << "Введите новый баланс: ";
    cin >> p.balance;

}

int main()
{
    setlocale(LC_ALL, "rus");
    bank_account card;
    order(card);
    cout << "Ваш счёт: " << card.owners_name << " " << card.account_number << " " << card.balance;
    return 0;
}