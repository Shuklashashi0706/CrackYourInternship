#include <iostream>
#include <vector>

using namespace std;

void rotateStringClockwise(string &s)
{
    int len = s.size();
    int end = s[len - 1];
    for (int i = len - 1; i >= 1; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = end;
}
void rotateStringAnti(string &s)
{
    int len = s.size();
    int start = s[0];
    for (int i = 1; i < len; i++)
    {
        s[i - 1] = s[i];
    }
    s[len - 1] = start;
}

int main()
{
    string str1 = "hello";
    rotateStringClockwise(str1);
    cout << str1 << endl;
    rotateStringAnti(str1);
    cout << str1 << endl;
    return 0;
}
