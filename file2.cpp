#include <iostream>
#include <string>
#include "middle_str.h"


bool proverka(string str) {
    for (int i = 0; i < itc_len(str); i++) {
        if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z')) {
            if(!(str[i] >= 'À' && str[i] <= 'ß') && !(str[i] >= 'à' && str[i] <= 'ÿ'))
                return false;
        }
    }
    return true;
}

string pol(string str, int pr1, int pr2) {
    string str_new = "";
    for (int i = pr1; i < pr2; i++) {
        if (str[i] != ' ') {
            str_new += str[i];
        }
    }
    return str_new;
}

int itc_countWords(string str) {
    string s = " " + str + " ";
    int pr1 = 0, num = 0, pr2;
    for (int i = 1; i < itc_len(s); i++) {
        if (s[i] == ' ') {
            pr2 = i;
            string s1;
            s1 = pol(s, pr1, pr2); 
            if (proverka(s1))
                num++;
            pr1 = pr2;
        }
    }
    return num;
}

string itc_maxCharWord(string str) {
    int maxi = 0;
    string max_str;
    int pr1 = 0, pr2;
    int i = 0, num = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') num++;
        i++;
    }
    if (num == itc_len(str)) return "error"; 
    string s = " " + str + " ";
    for (int i = 1; i < itc_len(s); i++) {
        if (s[i] == ' ') {
            pr2 = i;
            string str1 = pol(s, pr1, pr2);
            if (proverka(str1)) {
                if (itc_len(str1) > maxi) {
                    max_str = str1;
                    maxi = itc_len(str1);
                }
            }
            pr1 = pr2;
        }
    }
    return max_str;
}


char itc_sameChar(string str) {
    for (int i = 0; i < itc_len(str); i++) {
        for (int num = i + 1; num < itc_len(str); num++) {
            if (str[i] == str[num]) return str[i];
        }
    }
}
