#include<bits/stdc++.h>

using namespace std;
int main()  {
    char ayush[50];
    std::cin>>ayush ;
    int i = 0;
     if(ayush[0] == '9') {
         i++;
         std::cout <<"you are in first loop\n";
     }

     for(  ; ayush[i] != '\0' ; i++)  {
         int digit = ayush[i] - '0';
         if( 9 - digit  < digit) {
             digit = 9 - digit ;
             ayush[i] = digit + '0';
         }
     }
     std::cout << ayush<<endl ;
}