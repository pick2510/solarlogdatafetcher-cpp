/*
 * Modulestring.cpp
 *
 *  Created on: 27.07.2016
 *      Author: pick
 */

#include "Modulestring.h"
#include <vector>
#include <string>

namespace solarlogdatafetcher {

using namespace std;

Modulestring::Modulestring() {
    this->number = 1;
    this->name = "Name";
}

Modulestring::Modulestring(string name, int number){
    this->number = number;
    this->name = name;
}


const string& Modulestring::getName() const {
    return name;
}

void Modulestring::setName(const string& name) {
    this->name = name;
}

int Modulestring::getNumber() const {
    return number;
}

const vector<string>& Modulestring::getData() const {
    return data;
}

void Modulestring::setNumber(int number) {
    this->number = number;
}

Modulestring::~Modulestring() {
    // TODO Auto-generated destructor stub
}
void Modulestring::addData(string line) {
    this->data.push_back(line);
}

} /* namespace solarlogdatafetcher */
