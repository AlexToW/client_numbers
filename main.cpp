#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include <algorithm>
#include <regex>

//#include "phone_number.h"
//#include "client.h"
#include "phone_book.h"
using namespace std;
/*
 *  Найти фамилию клиента по номеру телефона.
    Найти номер телефона по фамилии.
    Добавить пару “телефон - фамилия”.
    По первым нескольким цифрам номера получить список фамилий с подходящими номерами.
 * */


int main() {
    PhoneBook pbook;
    PhoneNumber number("8-920-555-12-33");
    std::string name = "Ivan";
    Client c(name, number);
    pbook.AddClient(c);
    for(auto& item : pbook.FindByName("Ivan")) {

    }
    return 0;
}
