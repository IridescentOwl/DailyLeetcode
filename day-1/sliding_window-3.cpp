#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// The logic is going to be to use a sliding window, that grows from right when no duplicates in the substring are present. And shrinks from left when there are.
// we check for maxlen as long as the window is correct, i.e. i-left+1>maxlen
//
int maximalsubstring(string s)
{
  int n = s.length();
  if (!n) return 0;
  int left = 0;
  int maxlen = 0;
  set<char> duplicates;
  
  for(int i = 0; i < n; i++)
  {
    duplicates.insert(s[i]);
    if(duplicates.size() == i-left+1) 
    {
      if(maxlen>i-left+1)maxlen=i-left+1;
      continue;
    }
    else 
    {
      while(s[left]=s[i])
      {
        duplicates.erase(s[left]);
        left++; 
      }
      left++;
    }
  }
  return maxlen;
}


int main()
{
  string a = "abcabcbb";
  cout << maximalsubstring(a) << endl;
  return 0;
}
