#include<iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  int tbt = (x/2) * (y/2);
  int f = 0;
  if((x%2 == 1) && (y%2 ==1))
  {
    f = ((x/2+1) + ((y-1)/2));
  }
  else if(x%2 == 1)
  {
    f = y/2;
  }
  else if(y%2 == 1)
  {
    f = x/2;
  }

  cout <<(tbt + f);
  return 0;
}
