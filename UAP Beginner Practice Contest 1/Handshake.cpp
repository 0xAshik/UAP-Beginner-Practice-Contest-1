#include<iostream>
using namespace std;

int main()
{
  int testcase, x;
  cin >> testcase;
  while(testcase--)
  {
    cin >> x;
    int total_handshake = (x*(x-1)/2);
    cout << total_handshake << endl;
  }
  return 0;
}