#include<iostream>
using namespace std;
int main()
{
  int x11, v11, x22, v22;
  cin >> x11 >> v11 >> x22 >> v22;
  if((v11 <= v22) || (x22 - x11) % (v22 - v11))
  {
    cout <<"NO";
  }
  else
  {
    cout <<"YES";
  }
  return 0;
}