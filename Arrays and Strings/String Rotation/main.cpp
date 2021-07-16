/////String Rotation
#include <iostream>
#include <string>
using namespace std;

bool String_Rotation(string,string);

int main()
{
  string str;
  string tmp;
  cin >> str;
  cin >> tmp;
  cout << String_Rotation(str,tmp);
}

bool String_Rotation(string str,string tmp)
{
    if(str.size() != tmp.size()){return false;}
    for(int i = 0; i < str.size(); ++i)
    {
      char ch = tmp[0];
      tmp.erase(0,1);
      tmp = tmp + ch;
      if(tmp == str)
      {
          return true;
      }
    }
    return false;
}