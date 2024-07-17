#include<iostream>
using namespace std;
int main(){
  int n,tem=0,sum=0;
  cin >> n;
  string s;
  for (int i = 0; i <= n;i++){
    getline(cin, s);
    for (int j = 0; j < s.size(); j++)
    {
      if(s[j]=='1'){
        tem++;
      }
    }
    if(tem>1){
      sum++;
    }
    tem = 0;
  }
  cout << sum;
  return 0;
}