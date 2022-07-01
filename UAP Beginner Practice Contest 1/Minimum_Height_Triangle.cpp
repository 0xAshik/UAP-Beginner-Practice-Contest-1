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
