#include <iostream>
#include <vector>
#include <string>
using namespace std;

class longestPal
{
public:
    vector<int>lower;
    vector<int> upper;
    longestPal() : lower(26,0) , upper(26,0) {}
    void find(string s){
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'a'){
                lower[s[i]-'a']++;
            }else{
                upper[s[i]-'A']++;
            }
        }
        int count =0;
        bool odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2 == 0){
                count+=lower[i];
            }else{
                count+=lower[i]-1;
                odd=1;
            }
            if(upper[i]%2 ==0){
                count+=upper[i];
            }else{
                count+=upper[i]-1;
                odd=1;
            }
        }
        cout<<count+odd<<endl;
    }
};

int main()
{
    string s;
    getline(cin, s);
    longestPal obj1;
    obj1.find(s);
    return 0;
}