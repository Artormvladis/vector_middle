#include "middle_list.h"
void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus");
    vector <int> lst1, lst2, lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst2, lst3);
    cout<<"Положительные:"<<'\t'<<'\t'<<"Отрицательные:"<<"\n";
    cout<<"Количество чисел: "<<lst3.size()<<","<<'\t'<<'\t'<<"Количество чисел: "<<lst1.size()<<"\n";
    cout<<"Максимальная цифра: "<<itc_max_lst(lst3)<<","<<'\t'<<'\t'<<"Максимальная цифра: "<<itc_max_lst(lst1)<<","<<"\n";
    cout<<"Минимальная цифра: "<<itc_min_lst(lst3)<<","<<'\t'<<'\t'<<"Минимальная цифра: "<<itc_min_lst(lst1)<<","<<"\n";
    cout<<"Сумма чисел: "<<itc_sumlst(lst3)<<","<<'\t'<<'\t'<<"Сумма чисел: "<<itc_sumlst(lst1)<<","<<"\n";
    int a1=0;
    if (lst3.size()>0){
        a1=itc_sumlst(lst3)/lst3.size();
    }
    int a2=0;
    if (lst1.size()>0){
        a2=itc_sumlst(lst1)/lst1.size();
    }
    cout<<"Среднее значение: "<<a1<<","<<'\t'<<'\t'<<"Среднее значение: "<<a2<<","<<"\n";
    cout<<"\n";
    cout<<"Количество нулей: "<<lst2.size()<<endl;
}
