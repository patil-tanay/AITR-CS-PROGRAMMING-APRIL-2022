#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
string S = "ABCDCBA";
string P = S;
// Reverse the string P
reverse(P.begin(), P.end());
// If S is equal to P
if (S == P) {
// Return "Yes"
    cout<<"YES";
}
// Otherwise
else {
// return "No" 
    cout<<"NO";
}
return 0;
}