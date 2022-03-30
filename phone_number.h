//
// Created by salex on 30.03.2022.
//
#pragma once
#include <iostream>
#include <regex>
#include <string>

class PhoneNumber {
public:
    PhoneNumber();
    explicit PhoneNumber(const std::string& number);
    std::string GetNumber() const;
private:
    std::string value;
};
