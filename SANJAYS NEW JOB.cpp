bool my_compare(std::pair<string , int> p1 , std::pair<string , int> p2  ) {
    
      if( p1.second == p2.second )
        return p1.first < p2.first ;          

    return p1.second > p2.second ;
}


int main() {
    std::pair<string ,int> v[10004] ;
    int min_salary ; std::cin>>min_salary ;
    int n ; std::cin>>n;
    string name ;
    int salary ;
    for(int i = 0 ; i < n ; i++)  {
        std::cin>>name>>salary ;
    v[i].first = name ;
    v[i].second =  salary;
    }
    
    sort(v, v+ n , my_compare) ;
    
    for(int i = 0 ; i < n ; i++) 
        std::cout <<v[i].first <<" " <<v[i].second <<endl;
    
}