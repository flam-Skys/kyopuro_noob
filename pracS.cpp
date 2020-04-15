    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int N, S;
      int sum = 0;
      cin >> N >> S;
      vector<int> A(N), P(N);
      for (int i = 0; i < N; i++) {
        cin >> A.at(i);
      }
      for (int i = 0; i < N; i++) {
        cin >> P.at(i);
      }
     
      // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
      for (int i = 0; i < N; i++) {
          for (int j = 0; j < N; j++) {
              if ((A.at(i) + P.at(j)) == S) {
                  sum++;
              }
          }
      }
      cout << sum << endl;
    }