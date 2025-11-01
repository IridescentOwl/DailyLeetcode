# Day-1 Sliding Window Question- Longest substring

  Hello Everyone, this is the first file. For now I will be
  following the given structure of filling for this,
  Day-x Topic/leetcode_qs_no.cpp
  suppliment.tx

  thet suppliment file will contoain what I learned and my thought process
  since thinking through the question is a really good practice.

## Question

    Given a string s, find the length of the longest without duplicate characters.

### example

      Input: s = "abcabcbb"
      Output: 3
      Explanation: The answer is "abc", with the length of 3.
      Note that "bca" and "cab" are also correct answers

Appraoch:
I first started with a loop similar to this
  initialize left as 0
  initialize a duplicate set
  for(i from 0 to n)
    // i is the right pointer and is used for expanding the window
    insert i into duplicates set 
    if size of duplicates set is equal to window 
      check for maxlen then continue;
    else 
      shrink window(
        //since duplicate is the last element in the window, 
        run loop till left pointer has same char as right pointer 
        remove all elements till then from duplicates. 
        do not remove the right pointer from duplicate, increment left else everytime.
    return
)   
        
