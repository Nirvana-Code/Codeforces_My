#include <bits/stdc++.h>

using namespace std;

int main(){
    char str1[200000], str2[200000];

    cin >> str1;
    cin >> str2;

    int yes = 0, opa = 0;

    int k = strlen(str1);
    int k1 = strlen(str2);

    for (int i(0); i<k; i++){
        for (int j(0); j<k1; j++){
            if (str1[i] == str2[j]){
                yes++;
            }
            if (((str2[j] + 32) == str1[i]) || ((str2[j] - 32) == str1[i])){
                opa++;
            }
        }
    }
    cout << yes << ' ' << opa;
    return 0;
}
