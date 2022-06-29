#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int t;
  cin>>t;
  while(t--)
  {
      int n , x, p;
      cin>>n>>x>>p;
      int correctMarks = x*3;
      int incorrectMarks = (n-x)*(-1);
      int total = correctMarks + incorrectMarks;
       if (total>=p){
           cout<<"PASS"<<endl;
       }
       else
         cout<<"FAIL"<<endl;
  }
  cout<<endl;
  
}
   