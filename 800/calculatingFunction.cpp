#include <bits/stdc++.h>

int main() {
    long long int n;
    std::cin>>n;
    if(n % 2 == 0) std::cout<<n/2;
    else std::cout<<'-'<<n/2+1;
    return 0;
}