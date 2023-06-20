#include <bits/stdc++.h>
#include<cmath> 

using namespace std;

int main()
{
   int t;
   std::cin >> t;
   for(int i = 0;i<t;i++){
       int n;
       int b=0;
       std::cin >> n;
       int arr[n];
       for(int x = 0;x<n;x++){
           std::cin >>arr[x] ;
     
       }
       sort(arr, arr + n);
       int c = n/2;
       for(int x = 0;x<c;x++){
           b += abs(arr[x]-arr[n-1-x]);
       }
      
       std::cout << b << std::endl;
   }
    return 0;
}