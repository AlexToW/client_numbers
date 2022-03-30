//
// Created by salex on 30.03.2022.
//
#include "phone_book.h"

PhoneBook::PhoneBook() = default;

void PhoneBook::AddClient(Client &client) {
    clients.push_back(client);
}

std::pair<bool, std::vector<std::string>> PhoneBook::FindByName(const std::string& name) {
    std::vector<std::string> res = {};
    auto it = begin(clients);
    while((it = std::find_if(it, end(clients),
                             [&name](Client& c) {return c.GetName() == name;})) != end(clients)) {
        res.push_back(it->GetNumber());
        it++;
    }

    if(res.empty()) {
        std::cerr << "There are no clients with name '" << name << "'." << std::endl;
        return std::make_pair(false, res);
    }
    return std::make_pair(true, res);
}

std::pair<bool, std::string> PhoneBook::FindByNumber(const PhoneNumber& number) {
    auto it = std::find_if(begin(clients), end(clients),
                           [&number](Client& c) {
        return c.GetNumber() == number.GetNumber();
    });

    if(it == end(clients)) {
        std::cerr << "There are no clients with number " << number.GetNumber() << std::endl;
        return std::make_pair(false, "");
    }
    return std::make_pair(true, it->GetName());
}


std::vector<Client> PhoneBook::FindByPart(const std::string& number) {
    std::vector<Client> res;
    for(auto& client : clients) {
        if(client.GetNumber().find(number) == 0) {
            res.push_back(client);
        }
    }
    return res;
}