#include <bits/stdc++.h>
using namespace std;

int main()
{
    int yasumi, shukudai;
    int count = 0;
    cin >> yasumi >> shukudai;

    vector<int> nissuu(shukudai);
    for (int i = 0; i < shukudai; i++){
        cin >> nissuu.at(i);
    }
    for (int i = 0; i < shukudai; i++){
        count += nissuu.at(i);
    }

    if ((yasumi - count) >= 0){
        cout << yasumi - count << endl;
    }else{
        cout << -1 << endl;
    }
}