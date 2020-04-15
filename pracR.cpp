    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      vector<int> data(5);
      for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
      }
      bool a = false;
     
      // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
      for (int i = 0; i < data.size(); i++) {
          if (i != 0) {
              if (data.at(i) == data.at(i - 1)) {
                  a = true;
                  break;
              }
          }
      }
      if (a == true) {
          cout << "YES" << endl;
      } else if (a == false) {
          cout << "NO" << endl;
      }

    }