#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> temp(N);
    vector<int> num(N);

    for (int i = 0; i < N - 1; i++){
        cin >> temp.at(i);
    }

    for (int i = 0; i < N - 1; i++){
        num.at(temp.at(i) - 1)++;
    }

    for (int i =0; i < N; i++){
        cout << num.at(i) << endl;
    }
}