#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <char> itc_strtlist(string str);
string itc_join(vector <char> lst, string sep);
string itc_rmstrspc(string str);
string itc_rmstrchar(string str, string less);                                                                       
long itc_sumlst(const vector <int> &lst);
int itc_max(const vector <int> &mass);
int itc_min(const vector <int> &mass)
#endif
