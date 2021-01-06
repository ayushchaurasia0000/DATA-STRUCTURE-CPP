#include<bits/stdc++.h>

using namespace std;

void fun(char *arr)  {
     for(int i = 0 ; arr[i] != '\0' ; i++) {
      for(int j = i ; arr[j] != '\0' ; j++){
       for(int k = i ; k <= j ; k++)
       std::cout <<arr[k];
       std::cout <<endl;
      }
     }
}
int main()  {
     char arr[] = "ayush";
     
     fun(arr);
     
}