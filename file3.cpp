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
			int sym2 = i + itc_len(s1) + 1;
			string st = pol(s2, i, sym2);
			if (st == s1) return 1;
			else return 0;
		}
	}
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
		if (!proverka2(str, k, i))
			sym = str[i] + (k + 26);
		else 
			sym = str[i] + k;
		str_new += sym;
	}
	return str_new;
}

string itc_rmFreeSpace(string str) {
	string str_new = "";
	for (int i = 0; i < itc_len(str); i++) {
		str_new += str[i];
		while (str[i] == ' ' && str[i + 1] == ' ') i++;
	}
	return str_new;
}

bool itc_isIp(string str) {
	int num = 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] == '.')
			num++;
	}
	if (num != 3) return 0; 
	for (int i = 0; i < itc_len(str); i++) {
		string str2 = "";
		while (str[i] != '.') {
			str2 += str[i];
			i++;
		}
	}
	return 1;
}