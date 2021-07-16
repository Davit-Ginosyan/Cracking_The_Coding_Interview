#include <iostream>
#include <string>
using namespace std;

bool unique(string);

int main()
{
  string str;
  cin >> str;
  cout << unique(str);
}

bool unique(string str)
{
  if(str.length() > 256){return false;}
  int x = 0;
  bool b[256]{0};
  for(int i = 0; i < str.length(); ++i)
  {
      x = str[i];
      if(b[x])
      {
          return false;
      }
      b[x] = true; 
  }
    return true;
}