#include<bits/stdc++.h>

using namespace std;

bool fun(char *arr1 , char *arr2) {
     int l1 = strlen(arr1) , l2 = strlen(arr2);
     
     if(l1 != l2)
     return false;
     
     int frequency[26] = {0};
     
     for(int i = 0 ;i < l1 ; i++)
     frequency[arr1[i] - 'a']++;
     
     for(int j = 0 ; j < l2 ; j++)
     frequency[arr2[j] - 'a']--;
     
     
     for(int i = 0 ; i < 26 ; i++)
     if(frequency[i] != 0)
     return false;
     
     else return true;
     
}
int main()  {
     char arr1[100] , arr2[100];
     std::cin>>arr1>>arr2 ;
     fun(arr1 , arr2);
     
     if(fun(arr1,arr2))
     std::cout <<"yes";
     else
     std::cout <<"false";
     
     return 0;
}