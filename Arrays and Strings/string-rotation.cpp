#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

// template <typename Map>
// bool map_compare (Map const &lhs, Map const &rhs) {
//     // No predicate needed because there is operator== for pairs already.
//     return lhs.size() == rhs.size()
//         && std::equal(lhs.begin(), lhs.end(),
//                       rhs.begin());
// }


bool stringRotation (string a, string b) {

	if (a.size() != b.size()) return false;
	// map <char, int> m;
	// map <char, int> n;

	// // char frequency
	// for (int i = 0; i < a.size(); i++) m[a[i]]++;
	// for (int i = 0; i < b.size(); i++) n[a[i]]++;

	// // compares frequency
	// if (!map_compare (m,n)) return false;


	// checks rotation 
	string tmp = a + a; // concatenation

	// if b is substring of tmp, then are rotations
	return (tmp.find(b) != string::npos);

}


int main (void) {

	string a = "abcd";
	string b = "acbd";

	if (stringRotation (a, b)) cout << "yes" << endl;
	else cout << "no" << endl;

	return 0;
}