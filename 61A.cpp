#include <bits/stdc++.h>

using namespace std;

int main(){
    char one[101];
    char two[101];

    cin >> one;
    cin >> two;

    int k = strlen(one);

    for (int i(0); i<k; i++){
        if(one[i] == two[i]){
            cout << '0';
        }else{
            cout << '1';
        }
    }
    cout << '\n';
    return 0;
}
