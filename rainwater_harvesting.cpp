#include<bits/stdc++.h>

using namespace std;

void fun(int arr[] , int n)  {
    int total = 0 ;
    for(int i = 1 ; i < n - 1 ; i++) {
        int left = arr[i] ;
        for(int j = 0 ; j < i ; j++)
        left = max(arr[j] , left) ;

        int right = arr[i];

        for(int j = i+1 ; j < n ; j++)
        right = max(arr[j] , right);

        total += min(left , right ) - arr[i] ;
        std::cout <<total <<endl;
    }
    std::cout <<"this is total " <<total ;
}

int main()  {
    int n ; std::cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    std::cin>>arr[i] ;

    fun( arr , n );
    return 0;
}