//
// Created by salex on 30.03.2022.
//
#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include "phone_number.h"
#include "client.h"

class PhoneBook {
public:
    PhoneBook();
    std::pair<bool, std::string> FindByNumber(const PhoneNumber& number);
    std::pair<bool, std::vector<std::string>> FindByName(const std::string& name);
    void AddClient(Client& client);
    std::vector<Client> FindByPart(const std::string& number);
private:
    std::vector<Client> clients;
};