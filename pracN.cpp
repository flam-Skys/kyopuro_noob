    #include <bits/stdc++.h>
    using namespace std;
     
     //s.pop_back();
     //s.push_back(a);
    int main() {
      int N;
      int all = 0;
      int med;
      cin >> N;

      vector<int> vec(N);

      for (int i = 0; i < N; i++) {
          int n;
          cin >> n;
          vec.at(i) = n;
          all += n;
      }

      med = all / N;

      for (int i = 0; i < N; i++) {
          if (vec.at(i) > med) {
              cout << vec.at(i) - med << endl;
          }else{
              cout << med - vec.at(i) << endl;
          }
      }
    }