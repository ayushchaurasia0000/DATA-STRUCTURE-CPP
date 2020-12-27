#include<bits/stdc++.h>

using namespace std;

void fun(int arr[], int n) {
    int current = 0, maximum=0;
    for(int i = 0 ; i < n ; i++) {
        current +=arr[i];
        
        if(current < 0)
        current = 0;
        
        maximum = max(current , maximum);
    }
    std::cout <<"this is maximum "<<maximum;
}
int main()
{
    int n ; std::cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) 
        std::cin>>arr[i];
        fun(arr,n);
}