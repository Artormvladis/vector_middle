#include "middle_list.h"
void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus");
    vector <int> lst1, lst2, lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst2, lst3);
    cout<<"�������������:"<<'\t'<<'\t'<<"�������������:"<<"\n";
    cout<<"���������� �����: "<<lst3.size()<<","<<'\t'<<'\t'<<"���������� �����: "<<lst1.size()<<"\n";
    cout<<"������������ �����: "<<itc_max_lst(lst3)<<","<<'\t'<<'\t'<<"������������ �����: "<<itc_max_lst(lst1)<<","<<"\n";
    cout<<"����������� �����: "<<itc_min_lst(lst3)<<","<<'\t'<<'\t'<<"����������� �����: "<<itc_min_lst(lst1)<<","<<"\n";
    cout<<"����� �����: "<<itc_sumlst(lst3)<<","<<'\t'<<'\t'<<"����� �����: "<<itc_sumlst(lst1)<<","<<"\n";
    int a1=0;
    if (lst3.size()>0){
        a1=itc_sumlst(lst3)/lst3.size();
    }
    int a2=0;
    if (lst1.size()>0){
        a2=itc_sumlst(lst1)/lst1.size();
    }
    cout<<"������� ��������: "<<a1<<","<<'\t'<<'\t'<<"������� ��������: "<<a2<<","<<"\n";
    cout<<"\n";
    cout<<"���������� �����: "<<lst2.size()<<endl;
}
