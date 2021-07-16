//////String Compression
#include <iostream>
#include <string>
using namespace std;

string String_Compression(string);

int main()
{
    string str;
    cin >> str;
    cout << String_Compression(str);
}

string String_Compression(string str)
{
    int key = 0;
    int count = 1;
    string temp;
    temp.resize(str.size()*2);
    temp[key] = str[0];
    char ch;
    for(int i = 1; i <= str.size(); ++i)
    {
        if(str[i] == str[i-1])
        {
            ++count; 
        }
        else
        {  
            ch = count;
            ch += 48;
            ++key;
            temp[key] = ch;
            ++key;
            temp[key] = str[i];
            count = 1;
        }
    }
    temp.erase(key);
    if(str.size() <= temp.size()){return str;}
    return temp;
}
