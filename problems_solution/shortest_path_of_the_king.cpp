#include<bits/stdc++.h>

using namespace std;

int main(){

    string S, T;
    cin >> S >> T;
    int hor_diff = T[0] - S[0];
    int ver_diff = T[1] - S[1];
    int steps = max(abs(hor_diff), abs(ver_diff));
    cout << steps << endl;
    while(steps--){

    if(S[0] > T[0]){
        cout << "L";
        S[0]--;
    }
    else if(S[0] < T[0]){
        cout << 'R';
        S[0]++;
    }

    if(S[1] > T[1]){
        cout << 'D';
        S[1]--;
        
    }
    else if(S[1] < T[1]){
        cout << 'U';
        S[1]++;
    }

    cout << endl;
    }

    return 0;
}