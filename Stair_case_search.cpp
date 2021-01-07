#include<bits/stdc++.h>

using namespace std;

void fun(int arr[][4] , int found)  {
     int r = 3, c = 4-1, i = 0;
     while(c >= 0 && i < r) {
          if(arr[i][c] == found)  {
          std::cout <<"found at index "<<i <<" "<<c;
          return ; // this will not exexute further :)
          }
          
          else if(found > arr[i][c])
          i++;
          
          else
          c--;
     } 
     std::cout <<"sorry not found :( " ;
}
int main()  {
      int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12} ;
    fun(arr , 8);
    return 0; 
}