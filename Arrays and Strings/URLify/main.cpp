#include <iostream>
#include <string>
using namespace std;

string URLify(string, int);

int main()
{
    int a;
    string str;
    getline(cin,str);
    cin >> a;
    cout << URLify(str,a);
}

string URLify(string str, int a)
{
    int i = 0;
    int count = 0;
    for( i ; i < a; ++i)
    {
        if( str[i] ==  ' ')
        {
            ++count;
        }
    }
    a = (a - count) + (count*3);
    str.resize(a);
    for(int j = a ; j >= 0; --i,--j)
    {
      
        if(str[i] == ' ')
        {
            str[j] = '0';
            --j;
            str[j] = '2';
            --j;
            str[j] = '%';
            --j;
            --i;
        }
    
            str[j] = str[i];
    }
    return str;
}