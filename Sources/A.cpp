#include <bits/stdc++.h>

using namespace std;

int main(){
    char str1[101];
    cin >> str1;
    int k = strlen(str1);
    char str2[k+1];
    cin >> str2;
    if((str1[k-1] + 1) <= str2[k-1]){
        for (int i(1); i<k; i++){
            cout << str1[i-1];
        }
        char st[1];
        st[1] = str1[k] + 1;
        cout << st[1];
    } else {
        cout << "No such string";
    }
    return 0;
}
