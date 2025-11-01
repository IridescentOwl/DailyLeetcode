#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
  Solution for this problem 
  Solution(string s, int k)
   initialise a left and right pointer 
   increment right pointer as per a for loop 
    add right pointer to a map to keep count
    update maxfreq = max(maxfreq, count(right pointer))
    if window length - maxfreq < k 
      check if window lenght is larger than maxlen and update 
    else shrink:
      increment left till left=right or window length - maxfreq < k.
 */

int longest_repeating_charater(string s, int k)
{
  int maxfreq=0,maxlen=0;
  int left=0;
  int n = s.length();
  unordered_map<char, int> count;
  for(int i = 0; i < n; i++)
  {
    count[s[i]]++;
    maxfreq = max(maxfreq, count[s[i]]);
    if((i-left+1)-maxfreq<=k)
    {
      maxlen=max(maxlen, i-left+1);
      continue;
    }
    else
    {
      while((i-left+1)-maxfreq>k)
      {
        count[s[left]]--;
        left++;
      }
    }
  }
  return maxlen;
}
int main()
{
  string test = "ABAACDCCD";
  longest_repeating_character(test);
  return 0;
}
