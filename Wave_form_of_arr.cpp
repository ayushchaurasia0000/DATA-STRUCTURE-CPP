#include<bits/stdc++.h>

using namespace std;

void wave_form(int arr[][3] , int r , int c)  {
     
     for(int i = 0 ; i < c ; i++) {
          if(i % 2 == 0 || i == 0) 
          for(int j = 0 ; j < r ; j++)
          std::cout <<arr[j][i]<<" ";
          
          else
          for(int l = r-1 ; l >= 0 ; l--)
          std::cout <<arr[l][i] <<" ";
          
          
     }
}
int main()  {
     int arr[4][3]= { 1,2,3,4,5,6,7,8,9,10,11,12};
     wave_form(arr,4,3);
     return 0;
}