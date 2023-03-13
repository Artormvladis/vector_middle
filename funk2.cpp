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

    }
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
    cout << "Анализ списка:" << endl;
    cout << "Количество четных чисел: " << lst1.size() << "," << '\t' << '\t' << "Количество нечетных чисел: " << lst2.size() << "\n";
    cout << "Максимальная четная цифра: " << itc_max(lst1) << "," << '\t' << '\t' << "Максимальная нечетная цифра: " << itc_max(lst2) << "," << "\n";
    cout << "Минимальная четная цифра: " << itc_min(lst1) << "," << '\t' << '\t' << "Минимальная нечетная цифра: " << itc_min(lst2) << "," << "\n";
    cout << "Сумма четных чисел: " << itc_sumlst(lst1) << "," << '\t' <<'\t' << "Сумма нечетных чисел: " << itc_sumlst(lst2) << "," << "\n";
}
