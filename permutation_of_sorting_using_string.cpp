#include<bits/stdc++.h>

using namespace std;

bool fun(string a, string b)  {
     int l1 = a.length() , l2 = b.length();  // to find the length of string
     
     if(l1 != l2)
     return false; // when this will return the loop will not come again
     
     sort(a.begin() , a.end());  // this is to sort the string 
     sort(b.begin() , b.end());
     
     while(l1--) {
          if(a[l1] != b[l1])
          return false;
     }
     
     return true;
}
int main()  {
     string a,b;
     std::cin>>a>>b;
     
     fun(a,b);
     if(fun(a,b)) // this will run when it is true 
     std::cout <<"yes";
     
     else std::cout<<"no" ; // else this if false 
     return 0;
}