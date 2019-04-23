#include "funkc.h"
#pragma once
void print(vector <studentas> studentai, string filename);
void print(deque <studentas> studentai, string filename);
void print(list <studentas> studentai, string filename);
void print(vector <studentas> studentai, ostream &stream);
void print(deque <studentas> studentai, ostream &stream);
void print(const list <studentas> studenta, ostream &stream);
void addfromfile(vector <studentas> &studentai, string filename);
void addfromfile(deque <studentas> &studentai, string filename);
void addfromfile(list <studentas> &studentai, string filename);
void generatefile(int studentai, string filename);
void printtofile(ofstream &file, studentas studentas);
void filtertofile(const vector <studentas> studentai);
void filtertofile(const list <studentas> studentai);
void filtertofile(const deque <studentas> studentai);
