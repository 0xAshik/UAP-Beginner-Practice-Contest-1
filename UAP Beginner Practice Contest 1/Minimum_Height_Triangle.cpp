// a = (b * h)/2;
// h = a/b*2//

// #include<iostream>
// #include<cmath>
// using namespace std;
//  float minheight(int a, int b)
//  {
//   return ceil((a/b)*2);
//  }
//  int main()
//  {
//   int a, b;
//   cin >> a >> b;
//   cout << minheight(a, b) << endl;
//   return 0;
//  }

#include <iostream>
using namespace std;
int main() {
  int area, base;
   int height;
   cin >> base >> area;
   height = (2*area)/ base + bool((2*area) % base);
   cout << height << endl;
   return 0;
}