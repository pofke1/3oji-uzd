#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <sstream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <ostream>
#pragma once
using namespace std;
class studentas
{
    private:
    string vard, pavard;
    double vidNd, egz, galutinis;
    double mediana;
    vector <double> nd;
    public:
    int calc();
    void addNd(double nd_);
    void changeEgz(double egz_);
    void resetNd();
    string name(string name_);
    string secondN (string second);
    string name () const;
    string secondN() const;
    double printGal() const;
    double printMed() const;
    bool operator < (const studentas& rhs) const
    {
        return pavard < rhs.pavard;
    }
};
