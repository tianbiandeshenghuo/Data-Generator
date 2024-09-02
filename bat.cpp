#include<bits/stdc++.h>
#include<windows.h>

using namespace std;
string check(int i){
  string s;
  while (i){
    s =  char(i % 10 + '0') + s;
    i /= 10;
  }
  return s;
}
int main(){
  system("g++ sol.cpp -o sol -O2 -std=c++17");
  for (int i = 1; i <= 20; i++){
    system("python checker.py > [problem name].in");
    system("sol < [problem name].in > [problem name].out");
    string op = "del " + check(i) + ".in & del " + check(i) + ".out";
    char q[114514] = {0};
    for (int j = 0; j < op.size(); j++){
      q[j] = op[j];
    } 
    system(q);
    string s = "rename [problem name].in [problem name]" + check(i) + ".in";
    char qwq[114514] = {0};
    for (int j = 0; j < s.size(); j++){
      qwq[j] = s[j];
    }
    s = "rename [problem name].out [problem name]" + check(i) + ".out";
    //cout << qwq << '\n';
    system(qwq);
    char _qwq[114514] = {0};
    for (int j = 0; j < s.size(); j++){
      _qwq[j] = s[j];
    }
    system(_qwq);
  }
  return 0;
}
