// #include<iostream>
// using namespace std;
// int main(){   
//      int n;    
//      int m;
//     cin >> n >> m;
//     int twobytwo  = (m / 2) * (n / 2);
//     int factor = 0;
//     if( (m%2 ==1) && (n%2 ==1) ){ 
//        factor = ( (m/2 +1) + ((n-1) /2) );
//      }else if(m%2 == 1){
//         factor = n/2;
//     }else if(n%2 == 1){
//         factor = m/2;
//     } 
//    cout <<(twobytwo+factor);
//     return 0;
// }

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