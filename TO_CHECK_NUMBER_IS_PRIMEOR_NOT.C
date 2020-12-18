#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n , count = 0;  std::cin>>n;
    for(int i = 2 ; i <= 5 ; i++)
    {
        if( n % i == 0 )
        {
        std::cout <<" IT IS PRIME \n";
            break;
        }
        else ++count;
    }
    
    if(count == 4)
    std::cout << " NOT PRIME";

    return 0;
}