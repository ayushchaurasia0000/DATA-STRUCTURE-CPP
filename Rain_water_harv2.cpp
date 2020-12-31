#include<bits/stdc++.h>

using namespace std;

void fun(int arr[], int n)  {
    int right = 0 , left = 0 ;
    int arr_left[n] , arr_right[n];
    for(int i = 0 ; i < n ; i++) {
    left = max(left , arr[i]);
    arr_left[i]= left;
    }

    for(int i = n - 1 ; i >= 0 ; i--) {
        right = max(right , arr[i]);
        arr_right[i] = right;
    }
        int total = 0;
    for(int i = 0 ; i < n ; i++) {
        total += (min(arr_left[i], arr_right[i]) - arr[i]);
    }
    std::cout <<total<<endl;
    
}
int main()  {
int n ; std::cin>>n;
int arr[n] ;

for(int i = 0 ; i < n ; i++)
std::cin>>arr[i];


fun(arr,n);
}