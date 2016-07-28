/*
 * Inverter.cpp
 *
 *  Created on: 27.07.2016
 *      Author: pick
 */

#include "Inverter.h"
#include <vector>
#include <string>
using namespace std;
namespace solarlogdatafetcher {

    Inverter::Inverter() {
        this->name = "";
        this->number = 0;
        this->stringcount = 0;
    }

    Inverter::Inverter(std::string name, int number) {
        this->name = name;
        this->number = number;
        this->stringcount = 0;
    }

    const std::vector<Modulestring>& Inverter::getModulestrings() const {
        return modulestrings;
    }

    const std::string& Inverter::getName() const {
        return name;
    }

    void Inverter::setName(const string& name) {
        this->name = name;
    }

    int Inverter::getNumber() const {
        return number;
    }

    void Inverter::setNumber(int number) {
        this->number = number;
    }

    int Inverter::getStringcount() const {
        return stringcount;
    }

    Inverter::~Inverter() {

    }

    void Inverter::addString(Modulestring mstring) {
        this->modulestrings.push_back(mstring);
        this->stringcount++;
    }

} /* namespace solarlogdatafetcher */
