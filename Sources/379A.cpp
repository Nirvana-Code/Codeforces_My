#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;
    int sgor = 0;
    int hour = 0;

    while(a){
        sgor++;
        a--;
        if(sgor % b == 0){
            sgor = 0;
            a++;
        }
        hour++;
    }
    cout << hour << '\n';
    return 0;
}
