#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int day = 0;
    int dayCount = 0;

    while(n){
        dayCount++;
        n--;
        day++;
        if (day == m){
            n++;
            day = 0;
        }
    }
    cout << dayCount << '\n';
    return 0;
}
