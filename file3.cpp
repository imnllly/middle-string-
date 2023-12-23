#include <iostream>
#include <string>
#include "middle_str.h"


bool itc_isFirstInSecond(string s1, string s2) {
	int raz = itc_len(s2) - itc_len(s1) + 1;
	if (s1 == s2) return 1;
	if (itc_len(s1) > itc_len(s2)) return 0;
	else {
		s2 = " " + s2 + " ";
		for (int i = 0; i <= raz; i++) {
			int sym2 = i + itc_len(s1);
			string st = pol(s2, i, sym2);
			if (st == s1) return 1;
		}
		return 0;
	}
}

bool proverka3 (char i) {
    if(!(i >= 'a' && i <= 'z') && !(i >= 'A' && i <= 'Z'))
        return 1;
    return 0;
}

bool proverka2(string str, int k, int i) {
	if (!(str[i] + k >= 'A' && str[i] + k <= 'Z') && !(str[i] + k >= 'a' && str[i] + k <= 'z'))
			return 0;
	else
		return 1;
}

string itc_Cezar(string str, int k) {
	string str_new = "";
	char sym, n;
	for (int i = 0; i < itc_len(str); i++) {
        if(proverka3(str[i])) sym = str[i];
        else if(!proverka3(str[i])) {
		if(!proverka2(str, k, i) && (k < 0))
			sym = str[i] + (k + 26);
        else if(!proverka2(str, k ,i) && (k > 0)) {
            char x = k - ('z' - str[i]) - 1;
            sym = 'a' + x;
        }
		else
			sym = str[i] + k;
        }
		str_new += sym;
	}
	return str_new;
}


string itc_rmFreeSpace(string str) {
	string str_new1 = "", str_new2 = "";
	for (int i = 0; i < itc_len(str); i++) {
		str_new1 += str[i];
		while (str[i] == ' ' && str[i + 1] == ' ') i++;
	}
	for (int i = 1; i < itc_len(str_new1) - 1; i++) {
        str_new2 += str_new1[i];
	}
	return str_new2;
}
