#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int pass = 0; pass < n - 1; pass++) {

    for (int swp = 0; swp < n - pass - 1; swp++) {

      if (v[swp] > v[swp + 1])
        swap(v[swp], v[swp + 1]);
    }
  }

  for (int x : v) {
    cout << x << " ";
  }
  return 0;
}