// A way too long words
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string s;
  string w;
  while (n--)
  {
    cin >> w;
    if (w.length() > 10)
    {
      string temp = w[0] + to_string(w.length() - 2) + w[w.length() - 1];
      s += temp + "\n";
    }
    else
    {
      s += w + "\n";
    }
  }
  cout << s;
  return 0;
}