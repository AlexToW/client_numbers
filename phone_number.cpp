//
// Created by salex on 30.03.2022.
//
#include "phone_number.h"
PhoneNumber::PhoneNumber() = default;

PhoneNumber::PhoneNumber(const std::string& number) {
    std::regex regex1("\\d{3}-\\d{3}-\\d{2}-\\d{2}");
    bool format = regex_match(number, regex1);
    if(format) {
        value = number;
    } else {
        std::cerr << "Bad format!" << std::endl;
        value = "0";
    }
}

std::string PhoneNumber::GetNumber() const {
    return value;
}


bool operator==(const PhoneNumber& lhs, const PhoneNumber& rhs) {
    return lhs.GetNumber() == rhs.GetNumber();
}