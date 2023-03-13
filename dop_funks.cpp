#include "middle_list.h"
int itc_max(const vector <int> &mass){
    int maxi=-2000000000;
    for(int i=0; i<mass.size(); i++){
        if (mass[i]>maxi){
            maxi=mass[i];
        }
    }
    return maxi;
}
int itc_min_lst(const vector <int> &mass){
    int mini=2000000000;
    for(int i=0; i<mass.size(); i++){
        if (mass[i]<mini){
            mini=mass[i];
        }
    }
    return mini;
}
