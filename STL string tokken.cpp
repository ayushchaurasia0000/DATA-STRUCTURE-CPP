#include<bits/stdc++.h>

using namespace std;
int main() {
     char str[]= { "ayush , is a , boy " } ;
     char *ptr;
     ptr = strtok(str , " ,"); // the both (" , ") would be same first start with this then you have to use NULL in every thing
     std::cout <<ptr<<" " ;
     while(ptr != NULL) {
          ptr = strtok(NULL , " ,");
          std::cout <<ptr <<" " ;
     }
     return 0;
}