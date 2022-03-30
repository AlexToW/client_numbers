//
// Created by salex on 30.03.2022.
//
#pragma once
#include <iostream>
#include <string>
#include "phone_number.h"


class Client {
public:
    //Client();
    Client(std::string& name, PhoneNumber& number);
    std::string GetName();
    std::string GetNumber();
private:
    std::string name;
    PhoneNumber number;
};
