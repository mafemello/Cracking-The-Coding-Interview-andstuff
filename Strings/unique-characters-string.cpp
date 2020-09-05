/*
	Implement an algorithm to determine if a string has all unique characters. 
*/
#include <iostream>
#include <vector>
using namespace std;

bool unique (string word) {

	vector<int>freq(word.size());
	for (int w : word) {
		freq[w] += 1;
		if (freq[w] > 1) {
			return false; // has repeated characters
		}
	}
	return true; // unique
}

int main (void) {

	string word;
	cin >> word;

	if (unique (word)) {
		cout << "unique!\n";
	} else {
		cout << "not unique...\n";
	}

	return 0;
}
