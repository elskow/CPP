// A. Prefix and Suffix Array
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Marcos loves strings a lot, so he has a favorite string s
//  consisting of lowercase English letters. For this string, he wrote down all its non-empty prefixes and suffixes (except for s
// ) on a piece of paper in arbitrary order. You see all these strings and wonder if Marcos' favorite string is a palindrome or not. So, your task is to decide whether s
//  is a palindrome by just looking at the piece of paper.

// A string a
//  is a prefix of a string b
//  if a
//  can be obtained from b
//  by deletion of several (possibly, zero or all) characters from the end.

// A string a
//  is a suffix of a string b
//  if a
//  can be obtained from b
//  by deletion of several (possibly, zero or all) characters from the beginning.

// A palindrome is a string that reads the same backward as forward, for example, strings "gg", "ioi", "abba", "icpci" are palindromes, but strings "codeforces", "abcd", "alt" are not.

// Input
// Each test consists of multiple test cases. The first line contains a single integer t
//  (1≤t≤120
// ) — the number of test cases. The description of test cases follows.

// The first line of each test case contains a single integer n
//  (2≤n≤20
// ) — the length of the string s
// .

// The second line of each test case contains 2n−2
//  strings a1,a2,⋯,a2n−2
//  — all non-empty prefixes and suffixes of s
// , not including itself, in arbitrary order.

// It is guaranteed that these strings are all the non-empty prefixes and suffixes of some string consisting of lowercase English letters.

// Output
// For each test case, output "YES" if s
//  is a palindrome, and "NO" otherwise.

// You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

// Example
// inputCopy
// 5
// 4
// bcd cd a d abc ab
// 3
// i io i oi
// 2
// g g
// 3
// t al lt a
// 4
// bba a ab a abb ba
// outputCopy
// NO
// YES
// YES
// NO
// YES
// Note
// In the first test case, s
//  is "abcd". Its prefixes are "a", "ab" and "abc", and its suffixes are "d", "cd" and "bcd". As the string "abcd" is not a palindrome, the answer is NO.

// In the second test case, s
//  is "ioi". Its prefixes are "i" and "io", and its suffixes are "i" and "oi". As the string "ioi" is a palindrome, the answer is YES.

// In the third test case, s
//  is "gg" which is a palindrome.

// In the fourth test case, s
//  is "alt" which is not a palindrome.



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
    ll tc;     \
    cin >> tc; \
    while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s.substr(0, n - 1);
    string s2 = s.substr(n - 1, n - 1);
    reverse(s2.begin(), s2.end());
    if (s1 == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }

    return 0;
}