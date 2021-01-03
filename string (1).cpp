#include<bits/stdc++.h>

using namespace std;

bool compare(string a , string b) {
     return a.length() < b.length() ; // this sort according to the length of the string 
}
int main()  {
    string arr[]= {"apple" , "banana" , "dog" , "cat"} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout <<" this is size of the arr "<<n<<endl;
    sort(arr,arr+4, compare); 
    for(int i = 0 ; i < 4 ; i++)
    std::cout <<arr[i]<<" ";
    return 0;
}