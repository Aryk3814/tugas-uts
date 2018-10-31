#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 63;
Batas = 63 + 100;
X = 20;
T = 63;
while( T <= Batas)
     { T = T + X;
       X = X + 10;
     }
 cout << T;

}
