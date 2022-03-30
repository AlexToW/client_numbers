//
// Created by salex on 30.03.2022.
//
#include "client.h"


Client::Client(std::string &name, PhoneNumber &number) {
    name = name;
    number = number;
}


std::string Client::GetNumber() {
    return number.GetNumber();
}

std::string Client::GetName() {
    return name;
}


