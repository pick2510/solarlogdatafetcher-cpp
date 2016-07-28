//============================================================================
// Name        : solarlogdatafetcher.cpp
// Author      : Dominik Strebel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include "boost/date_time.hpp"
#include "Plant.h"
using namespace std;
using namespace boost::posix_time;
using namespace boost::gregorian;

int main() {
    solarlogdatafetcher::Plant p = solarlogdatafetcher::Plant("Rer", 123344, "Hoi DU");
    string s;
    ptime now = second_clock::local_time();
    date today = now.date();
    now.
            vector<string> vec;
    s = "The END";
    vec.push_back(s);
    vec.push_back("23");
    cout << today + date_duration(1) << endl; // prints
    return 0;
}
