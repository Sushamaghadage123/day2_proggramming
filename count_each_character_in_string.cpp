#include <bits/stdc++.h> 
using namespace std; 
  
void printFrequency(string str) 
{ 
    unordered_map<char, int> M; 
    for (int i = 0; str[i]; i++) { 
        if (M.find(str[i]) == M.end()) { 
            M.insert(make_pair(str[i], 1)); 
        } 
        else { 
            M[str[i]]++; 
        } 
    } 
    for (auto& it : M) { 
        cout << it.first << ' '
             << it.second << '\n'; 
    } 
} 

int main() 
{ 
    string str = "computer_science_engineering"; 
  
    // Function call 
    printFrequency(str); 
    return 0; 
}
