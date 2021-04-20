#include<bits/stdc++.h>

using namespace std;
int main() {
 // fast ;
    int t ; std::cin>>t;
    
    while(t--) {
        int a , b, i = 0 , j = 0 ; std::cin>>a>>b ;
        string s ; std::cin>>s;
        int n = a+b ;
      swap(a,b) ;
        fr(i , 0 , n/2) {
            if(s[i] == '1') {
                a-- ;
                if(s[n-1-i] == '?')
                {
                    s[n-i-1] = '1' ;
                    a-- ;
                }
                else if(s[n-1-i] == '1'){
                    a-- ;
            }
            else 
            {
                j = 1 ; 
                break ;
            }
            
        }
        
        if(s[i] == '?') {
            if(s[n-1-i] == '?') {
                continue ;
            }
            
            s[i] = s[n-1-i] ;
            if(s[n-1-i] == '0') {
                b--;
                b-- ;
            }
            
            else {
                a--;
                a-- ;
            }
        }
        
    }
    
    if(n % 2 != 0) {
        if(s[n / 2] == '1')
        a-- ;
        
        else if(s[n/2] == '0' )
        b-- ;
        
        else {
            if(a % 2 != 0) {
                a-- ;
                s[n/2]= '1' ;
                
            }
            
            else if(b % 2 != 0) {
                b-- ;
                s[n / 2] = '0' ;
            }
            
            else {
                a-- ; 
                s[n/2] = '1' ;
            }
            
        }
    }
    
    if(j == 1 || a < 0 || b < 0 ) {
        std::cout <<"-1\n" ;
        continue ;
    }
    fr(i , 0 , n / 2) {
        if(s[i] =='?') {
            if(s[n-1-i] == '?') {
                
                if(a > b) {
                    s[i] = s[n-1-i] = '1';
                    a-- ; a-- ;
                }
                else {
                    s[i] = s[n-1-i] = '0' ;
                    b-- ;b-- ;
                }
                
            }
        }
        std::cout <<s<<endl ;
    }
       
}
