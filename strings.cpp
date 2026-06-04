#include <iostream>
#include <string>
using namespace std;
string substr(int st, int end, string original_string)
{
    string res;
    for (int i = st; i < end; i++)
    {
        res += original_string[i];
    }

    return res;
};

bool isEmpty(string s)
{
    return s.length() == 0;
};

string isAppend(string str1, string str2)
{
    return str1 + " " + str2;
};

int isFind(string str, string elem)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == elem)
        {
            return i;
        }
    }
    return -1;
};

int solve(string s)
{
    int count = 0;
    stringstream ss(s);
    string word, res;
    while (ss >> word)
    {
        res = word;
    }
    count = res.size();
    return count;
};

int main()
{
    // 1
    cout << substr(0, 6, "Shuban P Shetty") << endl;

    // 2 isEmpty
    if (isEmpty(""))
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }

    // 3 append
    cout << isAppend("Hello", "world");

    // 4 find
    cout << isFind("Shuban", "u") << endl;

    // 5 length of last word
    string s = "This is my sentence";
    cout << solve(s);

    // watch in leetcodeee

    return 0;
}
