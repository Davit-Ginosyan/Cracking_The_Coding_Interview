/////One Away
#include <iostream>
#include <string>

using namespace std;

bool One_Away(string,string);

int main()
{
    string str_1,str_2;
    cin >> str_1;
    cin >> str_2;
    cout << One_Away(str_1,str_2);
}

bool One_Away(string str_1, string str_2)
{
    int count = str_1.size() - str_2.size();
    if( count == 0 || count == 1 || count == -1)
    { 
       int key = 0;
       int current = (str_1.size() + str_2.size() + 1) / 2;

        for(int i = 0; i < str_1.size(); ++i)
        {
            for(int j = 0; j < str_2.size(); ++j)
            {
                if(str_1[i] == str_2[j])
                {
                    str_1[i] = '0';
                    str_2[j] = '0';
                }
            }
        }

            for(int i = 0;i < current; ++i)
            {
                if((str_1[i] ^ str_2[i] ) && (str_1[i] & str_2[i])) 
                {
                    ++key;
                }
            }
            if(key == 0 || key == 1 )
            {
                return true;
            }
    }
    return false;
}