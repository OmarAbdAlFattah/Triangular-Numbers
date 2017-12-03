#include <iostream>

using namespace std;

int triSum(int n){
    return (n * (n+1)*(n+2)) / 6;   // the formula recognized by the pattern of 1 3 6 10 15 21 ...
}

int main()
{
    int n = 4;
    cout<<triSum(n);
    return 0;
}
