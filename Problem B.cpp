#include <bits/stdc++.h>
#include<cmath> 

using namespace std;

int main()
{
  long long t;
  std::cin >> t;
  for(long long i = 0; i < t; i++){
       long long n;
       std::cin >> n;
       long long arr[n];
       for(long long x = 0; x < n; x++){
           std::cin >> arr[x];
     }
    
     long long b = 0;
     for(long long x = 0; x < n; x++){
         if(arr[x] < 0){
             b += arr[x] * -1;
         }
         else{
             b += arr[x];
         }
     }
     
     int c = 0;
     for(long long x = 0; x < n; x++){
         if(arr[x] < 0){
             c = c + 1;
             while(arr[x] <= 0){
                 x++;
             }
         }
     }
     std::cout << b << " " << c << std::endl;
  }
  
  return 0;
}
