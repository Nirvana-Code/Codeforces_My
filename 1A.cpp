#include <bits/stdc++.h>

using namespace std;

int main(){
    long long m,n,a;
    cin >> m >> n >> a;

    long long S = 0;
    long long r = 0;
    long long f = 0;
    if(m%a != 0){
        r = (int)((m/a) + 1);
    } else {
        r = (int)(m/a);
    }
    if(n%a != 0){
        f = (int) (n/a) + 1;
    } else {
        f = (int) (n/a);
    }
    S = f * r;
    cout << S << '\n';
    return 0;
}
