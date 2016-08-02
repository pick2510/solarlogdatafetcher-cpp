/*
 * Plant.cpp
 *
 *  Created on: 27.07.2016
 *      Author: pick
 */

#include "Plant.h"
using namespace std;


namespace solarlogdatafetcher {

Plant::Plant() {
    // TODO Auto-generated constructor stub
    this->name = "Test";
    this->inverterCount = 0;
    this->serialnumber = 1234234;
    this->password = "Testpw";

}

Plant::Plant(string name, long serialnumber, string password, int invCount) {
    this->name = name;
    this->serialnumber = serialnumber;
    this->password = password;
    this->inverterCount = invCount;
}
Plant::Plant(const Plant& other){
    std::cout << "Copy Constructor Called!" << std::endl;
}

const vector<Inverter>& Plant::getInverters() const {
    return inverters;
}

const string& Plant::getName() const {
    return name;
}

void Plant::setName(const string& name) {
    this->name = name;
}

const string& Plant::getPassword() const {
    return password;
}

void Plant::setPassword(const string& password) {
    this->password = password;
}

long Plant::getSerialnumber() const {
    return serialnumber;
}

int Plant::getInverterCount() const {
    return inverterCount;
}

void Plant::setInverterCount(int inverterCount) {
    this->inverterCount = inverterCount;
}

void Plant::setHttpResponse(string httpResponse) {
    this->httpResponse = httpResponse;
}

string Plant::getHttpResponse() const {
    return httpResponse;
}

void Plant::setSerialnumber(long serialnumber) {
    this->serialnumber = serialnumber;
}

Plant::~Plant() {
    // TODO Auto-generated destructor stub
}

void Plant::addInverter(Inverter inv) {
    this->inverters.push_back(inv);
}

} /* namespace solarlogdatafetcher */
