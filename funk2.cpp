#include "middle_list.h"
long itc_sum_even_lst(const vector <int> &lst){
    int a;
    a=0;
    for(int i=0; i<lst.size(); i+=2){
    a+=lst[i];
    }
    return a;
}
long itc_sum_even_part_lst(const vector <int> &lst){
    int a;
    a=0;
    for(int i=0; i<lst.size(); i++){
        if (lst[i]%2==0){
            a+=lst[i];
        }
    }
    return a;
}
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){
    for(int i=0; i<=lst.size(); i++){
        if(lst[i]%2==0){
            lst1.push_back(lst[i]);
        } else {
            lst2.push_back(lst[i]);
        }
    }
    for(int i1=0; i1<=lst1.size(); i1++){
        cout<<lst1[i1]<<" ";
    }
    for(int i2=0; i2<=lst2.size(); i2++){
        cout<<lst2[i2]<<" ";
    }
}
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){
    for(int i=0; i<=lst.size(); i++){
        if(lst[i]<0){
            lst1.push_back(lst[i]);
        } else if(lst[i]==0){
            lst2.push_back(lst[i]);
        } else {
            lst3.push_back(lst[i]);
        }
    }
    for(int i1=0; i1<=lst1.size(); i1++){
        cout<<lst1[i1]<<" ";
    }
    for(int i2=0; i2<=lst2.size(); i2++){
        cout<<lst2[i2]<<" ";
    }
    for(int i3=0; i3<=lst3.size(); i3++){
        cout<<lst3[i3]<<" ";
    }
}
void itc_odd_even_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "Russian");
    vector <int> lst1, lst2;
    itc_odd_even_separator_lst(lst, lst1, lst2);
    cout<<"Анализ списка:"<<endl;
    cout<<"Количество четных чисел: ";
    cout<<lst1.size()<<","<<'\t'<<'\t';
    cout<<"Количество нечетных чисел: ";
    cout<<lst2.size()<<endl;
    cout<<"Максимальная четная цифра: ";
    cout<<itc_max(lst1)<<","<<'\t'<<'\t';
    cout<<"Максимальная нечетная цифра: "
    cout<<itc_max(lst2)<<","<<endl;
    cout<<"Минимальная четная цифра: "
    cout<<itc_min(lst1)<<","<<'\t'<<'\t' 
    cout<<"Минимальная нечетная цифра: "
    cout<<itc_min(lst2)<<","<<endl;
    cout<<"Сумма четных чисел: "
    cout<<itc_sumlst(lst1)<<","<<'\t'<<'\t' 
    cout<<"Сумма нечетных чисел: "
    cout<<itc_sumlst(lst2)<<","<<endl;
}
