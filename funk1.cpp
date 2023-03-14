#include "middle_list.h"
vector <char> itc_strtlist(string str){
	vector<char> mass;
	for (int i=0; i<str.size(); i++){
    mass.push_back(str[i]);
  }
	return mass;
}
string itc_join(vector <char> lst, string sep){
    string str="";
    if (lst.size()>0){
        for(int i=0; i<lst.size()-1; i++){
            str+=lst[i];
            str+=sep;
        }
        str+=lst[lst.size()-1];
    }
    return str;
}
string itc_rmstrspc(string str){
    string str1="";
    for(int i=0; i<str.size(); i++){
      if (str[i]!=32){
        str1+=str[i];
      }
    }
    return str1;
}
string itc_rmstrchar(string str, string less){
    string str1="";
    int a=0;
    for (int i=0; str[i]!='\0'; i++) {
        for(int i1=0; less[i1]!='\0'; i1++){
          if (less[i1]==str[i]){
            a=1;
          }
        }
        if (a==0){
	  str1+=str[i];
	}
        a=0;
    }
    return str1;
}
long itc_sumlst(const vector <int> &lst){
    int a=0;
    if (lst.size()!=0){
      for(int i=0; i<lst.size(); i++){
        a+=lst[i];
       }
    }
    return a;
}
