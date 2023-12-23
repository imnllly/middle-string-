#include <iostream>
#include <string>
#include "middle_str.h"


bool proverka4(string str) {
	for (int i = 0; i < itc_len(str); i++) {
		if (!(str[i] >= '0') || !(str[i] <= '9')) return 0;
	}
	return 1;
}

bool proverka5(string str) {
	if (itc_len(str) > 3) return 0;
	if (itc_len(str) == 3) {
		if (str[0] > '2') return 0;
		else if (str[1] > '5') return 0;
		else if (str[2] > '5') return 0;
	}
	return 1;
}

bool itc_isIp(string str) {
	str = ' ' + str + '.';
	int tsch1 = 0, tsch2, num = 0;
	bool a = 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] == '.') num++;
	}
	if (num != 4) return 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] == '.') {
			tsch2 = i;
			string s1 = pol(str, tsch1 + 1, tsch2);
			tsch1 = tsch2;
			if (proverka4(s1))
				if (proverka5(s1)) {
					a = 1;
				}
			else a = 0;
		}
	}
	return a;
}