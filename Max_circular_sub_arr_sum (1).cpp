#include<bits/stdc++.h>

using namespace std;

int kaden(int arr[] , int n) ;

int fun(int arr[] , int n)  {
    int current_max = kaden(arr , n);
    int maximum = 0;
    for(int i = 0 ; i < n ; i++)  {
         maximum += arr[i];
        arr[i] = -arr[i];
    }
    int new_max= maximum + kaden(arr,n);
   return  (new_max > current_max) ? new_max : current_max ;
}

int kaden(int arr[] , int n) {
    int cs = 0 ;
    int maximum= 0 ;
    for(int i = 0 ; i < n ; i++)  {
    cs += arr[i];
    if( cs < 0)
    cs = 0 ;

    
    maximum = max( maximum , cs);

    }
    return maximum;;
}
int main()  {
    int arr[3] = { 10 , -4 , -98};
    std::cout <<fun(arr,3)<<endl;

    return 0;
}