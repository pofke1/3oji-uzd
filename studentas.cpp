#include "studentas.h"
int studentas::calc ()
{

    //cout << "start"<<endl;
    double suma = 0;
    int vecsize = nd.size();

    for(int x = 0; x < vecsize; ++x)
    {
        suma = suma + nd[x];
    }

    vidNd = suma/vecsize;
    galutinis = vidNd*0.4+0.6*egz;
    sort(nd.begin(), nd.end());
    int temp = 0;
    temp = nd.size()/2;

    if(temp == nd.size())
    {
        mediana = (nd[temp-1]+nd[temp])/2;
        mediana = 0.4*mediana + 0.6*egz;
    }
    else
    {
        mediana = nd[temp+1];
        mediana = 0.4*mediana + 0.6*egz;
    }

}
string studentas::name(string name_)
{
    if(name_ != "")
    {
        vard = name_;
        return vard;
    }
    else
    {
        return vard;
    }
}
string studentas::secondN(string second)
{
    if(second != "")
    {
        pavard = second;
        return pavard;
    }
    else
    {
        return pavard;
    }
}
string studentas::name() const
{
    return vard;
}
string studentas::secondN() const
{
    return pavard;
}
double studentas::printGal() const
{
    return galutinis;
}
double studentas::printMed() const
{
    return mediana;
}
void studentas::addNd(double nd_)
{
    nd.push_back(nd_);
}
void studentas::resetNd()
{
    nd.clear();
}
void studentas::changeEgz(double egz_)
{
    egz = egz_;
}
