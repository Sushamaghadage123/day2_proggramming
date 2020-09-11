#include <iostream>
using namespace std;
int main() {
   char str[100] = "interneteee";
   char c = 'e';
   int count = 0;
   for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == c)
      count++;
   }
   cout<<"Frequency of alphabet "<<c<<" in the string is "<<count;
   return 0;
}
