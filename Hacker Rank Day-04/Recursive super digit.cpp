#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int super(long long x){
    if(x < 10) return x;
    int newX = 0;
    while(x){
        newX += x % 10;
        x /= 10;
    }
    return super(newX);
}


int main() {
    string n; int k; long long p = 0;
    cin>>n>>k;
    for(int i=0; i<n.size(); i++){
        p += n[i] - '0';
    }
    p *= k;
    cout<<super(p)<<endl;
    return 0;
}
