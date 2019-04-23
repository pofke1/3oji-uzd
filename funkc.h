#pragma once
#include <studentas.h>
using namespace std;
    extern double timee;
     extern bool counting;
     extern clock_t start;
double random(int min, int max);
double playPause();
class studentas;
struct laikai
{
    laikai();
    int studsk;
    string konteineriotipas;
    vector <double> laikas;
    printlaikai(ostream &stream);
};
void sortf(vector <studentas> &studentai);
void sortf(deque <studentas> &studentai);
void sortf(list <studentas> &studentai);
void add (list <studentas> &studentai);
void add (deque <studentas> &studentai);
void add (vector <studentas> &studentai);
void filtertomassive(vector <studentas> &studentai, vector <studentas> &vargsiukai, vector <studentas> &kietekai, int way);
void filtertomassive(deque <studentas> &studentai, deque <studentas> &vargsiukai, deque <studentas> &kietekai, int way);
void filtertomassive(list <studentas> &studentai, list <studentas> &vargsiukai, list <studentas> &kietekai, int way);
float input(string textToOutput, int minvalue, int maxvalue);
float input(string textToOutput, int minvalue);


