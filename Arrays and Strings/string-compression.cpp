#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

void stringCompression (string s) {

	int len = (int)s.size();
	string ans = "";

	int cont = 0;
	int j = 0;
	for (int i = 0; i < len-1; i++) {
		cont++;

		if (i + 1 >= len || s[i] != s[i+1]) {
			ans.push_back(s[i]);
			ans.push_back(cont);
			//ans += "" + s[i] + cont;
		}

		// ans.push_back (s[i]);
		// ans.push_back (cont);
		// cont = 0;
	}

	cout << ans << endl;
	cout << s << endl;

}


int main (void) {

	string s = "aabcccccaaa";

	stringCompression(s);

	return 0;
}