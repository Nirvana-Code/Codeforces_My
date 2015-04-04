#include <bits/stdc++.h>

using namespace std;
bool prob = true;
bool first = false;

int main(){
    char step[201];
    cin >> step;

    int k = strlen(step);
    char original[200];
    int i = 0, j = 0;
    while(i != k+1){
        if(step[i] == 'W' && step[i+1] == 'U' && step[i+2] == 'B'){
            if(prob && first){
                prob = false;
                original[j] = ' ';
                j++;
            }
            i+=3;
        }else{
            prob = true;
            first = true;
            original[j] = step[i];
            j++;
            i++;
        }
    }
    cout << original << '\n';
    return 0;
}
