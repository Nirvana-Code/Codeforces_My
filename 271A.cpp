#include <bits/stdc++.h>

using namespace std;

int main(){
    int year =0;
    cin >> year;
    int nextYear =0;

    for (int i(year+1); i<=9999; i++){
        int a = i%10;
        int b = ((i%100) / 10);
        int c = ((i%1000) / 100);
        int d = i / 10;

        if(a == b && a == c && a == d && b == c && c == d){
            continue;
        } else{
            nextYear = i;
            break;
        }
    }
    cout << nextYear << '\n';
    return 0;
}
