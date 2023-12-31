#include <iostream>
#include <string>
#include "middle_str.h"

using namespace std;

long long itc_len(string str) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) len++;
    return len;
}

bool itc_isDigit(unsigned char c) {
    if (c >= '0' && c <= '9') return 1;
    return 0;
}

unsigned char itc_toUpper(unsigned char c) {
    char k;
    if (c >= 'a' && c <= 'z') {
        k = c - 32;
        return k;
    }
    else return c;
}

unsigned char itc_changeCase(unsigned char c) {
    char k;
    if (c >= 'a' && c <= 'z') k = c - 32;
    else if (c >= 'A' && c <= 'Z') k = c + 32;
    else return c;
    return k;
}

bool itc_compare(string s1, string s2) {
    if (itc_len(s1) == itc_len(s2)) {
        for (int i = 0; i < itc_len(s1); i++) {
            if (s1[i] != s2[i]) return 0;
        }
        return 1;
    }
    else return 0;
}
