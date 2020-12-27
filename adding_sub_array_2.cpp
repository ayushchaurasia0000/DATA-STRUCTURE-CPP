#include<bits/stdc++.h>

using namespace std;

void fun(int arr[], int n)
{
    int max= 0 , right , left;
    for(int i = 0 ; i < n ; i++)  {
        for(int j = i ; j < n ; j++) { int count = 0 ;
            for(int k = i ; k <= j ; k++) 
                count +=arr[k];

     if(count > max) {
        max = count ;
        left = i;
        right = j;
    }
      }
         
    } 

    std::cout <<"this is max value "<<max<<endl;
    for(int i = right ; i <= left ; i++)
    std::cout <<arr[i]<<"\n ";

}
int main()
{
    //system("CLS");
    int arr[4] = { -9 , -8 , +89 , -6};
    fun(arr,4);

    return 0 ;
}