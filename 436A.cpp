#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,rost;

    vector<int> vid(n);
    vector<int> visot(n);
    vector<int> mass(n);
    int led = -1;

    for (int i(0); i<n; i++){
        cin >> vid[i] >> visot[i] >> mass[i];
    }

    int maxI = 0;
    int maxMas = 0;
    int count = 0;
    for (int j(0); j <n; j++){
        if(visot[j] <= rost && mass[j] != -1){
            if(mass[j] > maxMas){
                maxMas = mass[j];
                maxI = j;
            }
        }
    }
    if(maxMas != 0){
        rost += maxMas;
        mass[maxI] = -1;
        visot[maxI] = -1;
        count++;
        led = vid[maxI];
        maxMas = 0;
        while(1){
            for (int j(0); j <n; j++){
                if(visot[j] <= rost && mass[j] != -1){
                    if(mass[j] > maxMas && vid[j] != led){
                        maxMas = mass[j];
                        maxI = j;
                    }
                }
            }
            if(maxMas != 0){
                rost += maxMas;
                mass[maxI] = -1;
                visot[maxI] = -1;
                count++;
                maxMas = 0;
            } else {
                cout << count << '\n';
                break;
            }
        }
    }else {
        cout << count << '\n';
    }

    return 0;
}
