#include<bits/stdc++.h>

using namespace std;

int fun (int arr[] ,int n) {
    int temp_min = 0 , temp_max = 0 , straight_max= 0 , arr_sum = 0 , straight_min = 0 ;
    
    for(int i = 0 ; i < n ; i++) {
        temp_max += arr[i] ;
        
        if(temp_max < 0)
        temp_max = 0 ;
        straight_max = max(straight_max , temp_max);
        
        arr_sum += arr[i];
        
        temp_min += arr[i];
        
        if(temp_min > 0 )
        temp_min = 0 ;
        
        straight_min = min(straight_min , temp_min);
    }
    if(arr_sum == straight_min)
    return straight_max;
    
    else 
    return max(straight_max , (arr_sum - straight_min));
    
    return 0;
}

int main()  {
int arr[] = { 5 , -3 , -2 , 6 , -1 , 4} ;
std::cout << fun(arr,6);
return 0;
}