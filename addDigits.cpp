#include <bits/stdc++.h>

int fac(int n){
if(n == 0) return 0; 
int r = n % 10;
int rest = n / 10;

return r + fac(rest);
}


int main(){
std::cout << fac(1234567);
}