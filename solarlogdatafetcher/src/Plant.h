/*
 * Plant.h
 *
 *  Created on: 27.07.2016
 *      Author: pick
 */

#ifndef PLANT_H_
#define PLANT_H_
#include "Inverter.h"
#include <vector>
#include <string>
#include "md5.h"
using namespace std;
namespace solarlogdatafetcher {

    class Plant {
    private:
        string name;
        long serialnumber;
        string password;
        string digest;
        int inverterCount;
        vector<Inverter> inverters;
    public:
        Plant();
        Plant(string name, long serialnumber, string password);
        virtual ~Plant();
        const vector<Inverter>& getInverters() const;
        const string& getName() const;
        void setName(const string& name);
        const string& getPassword() const;
        void setPassword(const string& password);
        long getSerialnumber() const;
        void setSerialnumber(long serialnumber);
        void addInverter(Inverter inv);
        int getInverterCount() const;
    };

} /* namespace solarlogdatafetcher */

#endif /* PLANT_H_ */
