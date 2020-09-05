/*
	Given two strings, write a method to decide if one is a permutation of the other.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool checkPermutation (string first_word, string second_word) {

	// first we can make a previous checking to see if they, at least, are the same size
	if (first_word.size() != second_word.size()) 
		return false;
	// making a more serious checking	
	sort(first_word.begin(), first_word.end());
	sort(second_word.begin(), second_word.end());

	for (int i = 0; i < first_word.size(); i++) {
		if (first_word[i] == second_word[i]) {
			return true;
		}
	}
	return false;
}

int main (void) {

	string first_word, second_word;
	cin >> first_word;
	cin >> second_word;

	if (checkPermutation (first_word, second_word)) {
		cout << "permutation!\n";
	} else {
		cout << "not permutation\n";
	}

	return 0;
}
