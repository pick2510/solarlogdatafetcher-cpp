/*
 * Inverter.h
 *
 *  Created on: 27.07.2016
 *      Author: pick
 */

#ifndef INVERTER_H_
#define INVERTER_H_
#include <vector>
#include <string>
#include "Modulestring.h"
using namespace std;
namespace solarlogdatafetcher {

    using std::vector;
    using std::string;

    class Inverter {
    private:
        vector<Modulestring> modulestrings;
        int stringcount;
        string name;
        int number;

    public:
        Inverter();
        Inverter(string name, int number);
        virtual ~Inverter();
        const vector<Modulestring>& getModulestrings() const;
        const string& getName() const;
        void setName(const string& name);
        int getNumber() const;
        void setNumber(int number);
        int getStringcount() const;
        void addString(Modulestring mstring);
    };

} /* namespace solarlogdatafetcher */

#endif /* INVERTER_H_ */
