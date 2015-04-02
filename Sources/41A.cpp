#include <bits/stdc++.h>

using namespace std;
bool tr = true;
int main(){
    char slovo[101];
    char perevod[101];

    cin >> slovo;
    cin >> perevod;

    int k = strlen(slovo);

    for(int i(0); i<k; i++){
        if(slovo[i] == perevod[k-1-i]){
            continue;
        } else {
            tr = false;
        }
    }
    if(tr){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}
