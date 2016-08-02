/*
 * Modulestring.h
 *
 *  Created on: 27.07.2016
 *      Author: pick
 */

#ifndef MODULESTRING_H_
#define MODULESTRING_H_
#include<vector>
#include<string>


namespace solarlogdatafetcher {

using std::vector;
using std::string;

class Modulestring {
private:
    vector<string> data;
    string name;
    int number;
public:
    Modulestring();
    Modulestring(string name, int number);
    virtual ~Modulestring();
    const string& getName() const;
    void setName(const string& name);
    int getNumber() const;
    void setNumber(int number);
    const vector<string>& getData() const;
    void addData(string line);
};

} /* namespace solarlogdatafetcher */

#endif /* MODULESTRING_H_ */
