#include<iostream>
#include<string>
using namespace std;
int main()
{
    string st="nikhil";
    string str="kilhuo";
    int len=0;
    for(int i=0; i<st.length(); i++)
    {
        for(int j=0; j<st.length(); j++)
        {
            if(st[i]==str[j])
            {
                len++;
            }
        }
    }
    if(len==st.length())
    {
        cout<<"it is anagram phrase"<<endl;
    }
    else
    {
        cout<<"not a anagram phrase"<<endl;
    }
    return 0;
}
