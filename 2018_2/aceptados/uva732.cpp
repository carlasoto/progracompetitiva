#include <bits/stdc++.h>
//Codigo sacado de internet
using namespace std;

void anagram(size_t oi, size_t on, stack<char>& sst, stack<char>& tst,
  vector<char>& wv, const vector<char>& twv, vector<char>& ov){
  if (oi == on) {
    if (wv.size() == twv.size()) {
      for (size_t i = 0; i < on; i++) {
        if (i)
          cout << ' ';
        cout << ov[i];
      }
      cout << endl;
    }
  }
  else {
    if (!sst.empty()) {
      char c = sst.top();
      sst.pop();
      tst.push(c);
      ov[oi] = 'i';
      anagram(oi + 1, on, sst, tst, wv, twv, ov);
      sst.push(c);
      tst.pop();
    }
    if (!tst.empty() && tst.top() == twv[wv.size()]) {
      char c = tst.top();
      tst.pop();
      wv.push_back(c);
      ov[oi] = 'o';
      anagram(oi + 1, on, sst, tst, wv, twv, ov);
      tst.push(c);
      wv.pop_back();
    }
  }
}

int main()
{
  string sw, tw;
  while (cin >> sw >> tw) {
    cout << "[\n";
    size_t length = sw.length();
    if (length == tw.length()) {
      stack<char> sst, tst; // stack original, stack de la que se quiere
      vector<char> wv, twv(length), //palabra, palabra que se quiere
        ov(length * 2); //vector de operaciones
      for (size_t i = 0; i < length; i++) {
        sst.push(sw[length - i - 1]);
        twv[i] = tw[i];
      }
      anagram(0, length * 2, sst, tst, wv, twv, ov);
    }
    cout << "]\n";
  }
  return 0;
}

