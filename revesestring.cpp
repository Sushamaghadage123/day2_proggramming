#include <bits/stdc++.h> 
using namespace std; 

void reverse(string& str) 
{ 
    string temp=str;
    int n = str.length(); 
  
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]);
} 
  

int main() 
{ 
    string str = "intelligent";
    string str1="abada";
    reverse(str); 
    cout<<endl;
    reverse(str1);
     
    return 0; 
} 
