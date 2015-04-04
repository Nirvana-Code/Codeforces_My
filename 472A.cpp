#include <bits/stdc++.h>

using namespace std;

int main(){
    long long ch = 0;
    cin >> ch;

    if(ch % 2 == 0){
        int a = ch / 2;
        int b = a;
        if(a % 3 == 0 || a % 2 == 0){
            cout << a << ' ' << b << '\n';
        }
    } else{
        for (int i(4); i<ch; i++){
            if(i % 2 == 0 || i% 3 == 0){
                int a = i;
                int b = ch - i;
                if(b % 3 == 0 || b % 2 == 0){
                    cout << a << ' ' << b << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}
