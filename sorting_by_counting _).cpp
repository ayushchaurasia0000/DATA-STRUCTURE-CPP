#include<bits/stdc++.h>

using namespace std;

void fun(std::vector<int>arr , int n) {
     int final[n] ;
     int visited = -1;
    for(int i = 0 ; i < n ; i++) {
        int count = 1 ;
        for(int j = i + 1 ; j < n ; j++) {
            if(arr[j] == arr[i]) {
                count++;
                final[j] = visited ;
            } 
                
        }
        if(final[i] != visited)
            final[i] = count ;
    }
    
    for(int i = 0 ; i < n ; i++)  {
        if(final[i] != visited)  {
            for(int j = 0 ; j < final[i] ; j++) 
            std::cout <<arr[i] <<" ";
        }
    }
        
 }
int main() {
    std::vector<int>v = {7,8,9,8,7};
    fun( v , v.size() );
}