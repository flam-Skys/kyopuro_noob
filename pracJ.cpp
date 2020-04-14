    #include <iostream>
    using namespace std;
     
    int main() {
      int x, a, b;
      cin >> x >> a >> b;
     
      // 1.の出力
      x++;
      cout << x << endl;
      
      int z = x * (a + b);
      cout << z << endl;
      
      int n = z * z;
      cout << n << endl;

      cout << --n << endl;

    }