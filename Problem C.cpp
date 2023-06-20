#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
   std::cin >> t;
   for(int i = 0;i<t;i++){
       long long n;
       cin >> n;
       long  long a = n;
      long long b = n;
       while(b!=1){
           b = b/2;
           a = a+b;
           
       }
       std::cout << a << std::endl;
   }
    return 0;
}