#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

bool palindrome_permutation (string s) {

	map<char,int> m;
	int len = (int)s.size();
	int auxlen = len;

	for (int i = 0; i < len; i++) {
		m[s[i]]++; // frequency
		if (s[i] == ' ') auxlen--;
	}

	//even
	if (auxlen%2 == 0) {
		for (auto i:m) {
			if (i.first != ' ' && i.second % 2 != 0) return false;
		}
	}

	//odd
	int count = 0;
	if (auxlen%2 != 0) {
		for (auto i:m) {
			if (i.first != ' ' && i.second % 2 != 0) count++;
		}
		if (count > 1) return false;
	}


	return true;
}

int main (void) {

	string s = "a base do teto desaba";
	bool ans = palindrome_permutation (s);

	if (ans) printf ("yes\n");
	else printf ("no\n");

	return 0;
}