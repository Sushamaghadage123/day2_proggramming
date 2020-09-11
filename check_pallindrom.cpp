#include <bits/stdc++.h> 
using namespace std; 

void ispallindrom(string& str) 
{ 
    string temp=str;
    int n = str.length(); 
  
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]);
    if(str==temp)
    {
        cout<<"string is pallindrom";
    }
    else
    cout<<"string in not pallindrom";
} 
  

int main() 
{ 
    string str = "intelligent";
    string str1="aba";
    ispallindrom(str); 
    cout<<endl;
    ispallindrom(str1);
     
    return 0; 
} 
