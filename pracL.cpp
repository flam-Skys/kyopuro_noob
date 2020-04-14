    #include <iostream>
    using namespace std;
     
    int main() {
      int N, A;
      cin >> N >> A;
     
      for (int i = 0; i < N; i++) {
          string op;
          int v;
          cin >> op >> v;

          if (op == "+") {
              A += v;
          } else if (op == "-"){
              A -= v;
          } else if (op == "*"){
              A *= v;
          } else if (op == "/" && v != 0){
              A /= v;
          } else {
              cout << "error" << endl;
              break;
          }
          
          cout << i + 1 << ":" << A << endl;


      }
    }