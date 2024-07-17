#include <iostream>
using namespace std;
int main()
{
  int n, tp = 0, tn = 0, x = 0;
  cin >> n;
  string s;
  for (int i = 0; i <= n; i++)
  {
    getline(cin, s);
    for (int j = 0; j < s.size(); j++)
    {
      if (s[j] == '+')
      {
        tp++;
      }
      if (s[j] == '-')
      {
        tn++;
      }
    }
  }
  x = (tp / 2) - (tn / 2);
  cout << x;
  return 0;
}