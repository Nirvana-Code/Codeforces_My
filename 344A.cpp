#include <bits/stdc++.h>

using namespace std;

int main(){
    char pol[2];
    int count = 1;
    char pop[2];
    int n;
    cin >> n;
    cin >> pop;

    for (int i(0); i<n-1; i++){
        cin >> pol;
        if(pol[0] != pop[0] && pol[1] != pop[1]){
            count++;
            continue;
        }else{
            continue;
        }
        pop[0] = pol[0];
        pop[1] = pol[1];
    }


    cout << count << '\n';
    return 0;
}
