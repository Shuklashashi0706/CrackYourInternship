//Checking if a string is pallindrome or not
#include<iostream>
#include<string>
using namespace std;

int main(){
    string pal;
    getline(cin,pal);
    int start=0,end=pal.size()-1;
    int flag=1;
    while(start <= (pal.size()/2)){
        if(pal[start] != pal[end]){
            flag=0;
            break;
        }
        start++;
        end--;
    }
    if(flag == 0){
        cout<<"not a pallindrome"<<endl;
    }
    else{
        cout<<"Pallindrome"<<endl;
    }
    return 0;
}