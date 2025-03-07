#include<bits/stdc++.h>
using namespace std;

string s;
int sign[2] = {'+', '-'};
bool ok;

bool isCorrect()
{
  int x = stoi(s.substr(0, 2));
  int y = stoi(s.substr(5, 2));
  int z = stoi(s.substr(10, 2));

  if(x < 10 || y < 10 || z < 10)
   return 0;

  if(s[3] == '+')
   return x + y == z;
  else
   return x - y == z;
}

void Try(int i)
{
  if(ok) return;
  if(i == s.length()){
    if(isCorrect()){
      ok = true;
      cout << s << endl;
    }
    return;
  }

  if(s[i] == '?')
  {
    if(i == 3)
    {
      for(int j = 0; j <= 1; j++)
      {
        s[i] = sign[j];
        Try(i + 1);
      }
    }
    else
    {
      for(int j = 0; j <= 9; j++)
      {
        s[i] = j + '0';
        Try(i + 1);
      }
    }
    s[i] = '?';
  }
  else
  {
    Try(i + 1);
  }

}


void testCase()
{
    ok = false;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
      if(s[i] == '*' or s[i] == '/')
      {
        cout << "WRONG PROBLEM!" << endl;
        return;
      }
    }
    Try(0);
    if(!ok){
      cout << "WRONG PROBLEM!" << endl;
    }
}

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while(t--)
  {
    testCase();
  }
}