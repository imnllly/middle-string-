#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include <string>
using namespace std;

long long itc_len(string str);
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
bool proverka(string str);
string pol(string str, int pr1, int pr2);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
bool proverka2(string str, int k, int i);
bool proverka3(char i);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);

#endif
