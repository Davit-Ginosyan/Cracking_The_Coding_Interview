#include <iostream>
#include <string>
using namespace std;

bool Check_Permutation(string,string);

int main()
{
    string str;
    string str_1;
    cin >> str;
    cin >> str_1;
    cout << Check_Permutation(str,str_1);
}

bool Check_Permutation(string str_1, string str_2)
{
    if(str_1.length() != str_2.length())
    {
        return false;
    }
    for(int i = 0; i < str_1.length(); ++i)
    {
        for(int j = 0; j < str_2.length();++j)
        {
            if(str_1[i] == str_2[j])
            {
                str_1[i] = '0';
                str_2[j] = '0';
            }
        }
    }
    if(str_2 == str_1)
    {
        return true;
    }
return false;
}