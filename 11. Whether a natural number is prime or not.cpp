#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, chk=0;
    cin >> n;
    for(i=2; i<n; i++)
        {
        if(n%i==0)
        {
            chk++;
            break;
        }
    }
    if(chk==0)
        cout<<"Prime Number";
    return 0;
}
