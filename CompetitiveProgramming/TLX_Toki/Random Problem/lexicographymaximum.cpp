// C. Double Lexicographically Minimum
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given a string s
// . You can reorder the characters to form a string t
// . Define tmax
//  to be the lexicographical maximum of t
//  and t
//  in reverse order.

// Given s
//  determine the lexicographically minimum value of tmax
//  over all reorderings t
//  of s
// .

// A string a
//  is lexicographically smaller than a string b
//  if and only if one of the following holds:

// a
//  is a prefix of b
// , but a≠b
// ;
// in the first position where a
//  and b
//  differ, the string a
//  has a letter that appears earlier in the alphabet than the corresponding letter in b
// .
// Input
// The first line contains a single integer t
//  (1≤t≤105
// ) — the number of test cases. Descriptions of test cases follow.

// The first and only line of each test case contains a string s
//  (1≤|s|≤105
// ). s
//  consists of only lowercase English letters.

// It is guaranteed that the sum of |s|
//  over all test cases does not exceed 105
// .

// Output
// For each test case print the lexicographically minimum value of tmax
//  over all reorderings t
//  of s
// .

// Example
// inputCopy
// 12
// a
// aab
// abb
// abc
// aabb
// aabbb
// aaabb
// abbb
// abbbb
// abbcc
// eaga
// ffcaba
// outputCopy
// a
// aba
// bab
// bca
// abba
// abbba
// ababa
// bbab
// bbabb
// bbcca
// agea
// acffba
// Note
// For the first test case, there is only one reordering of s
// , namely "a".

// For the second test case, there are three reorderings of s
// .

// t=aab
// : tmax=max(aab,baa)=baa
// t=aba
// : tmax=max(aba,aba)=aba
// t=baa
// : tmax=max(baa,aab)=baa
// The lexicographical minimum of tmax
//  over all cases is "aba".

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}