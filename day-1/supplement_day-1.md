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

## Question 2- Longest Repeating Character Replacement

    You are given a string s and an integer k. You can choose any character of the string and change
    it to any other uppercase English character. You can perform this operation at most k times.
    Return the length of the longest substring containing the same letter you can get after performing the above operations.

    This is a very similar question to the previous one. But, we have to instead of finding a unique substring,
    find a repeating substring. We should first try if the previous approach can be modified to fit this.Since there is no correlation between maximal unique substring and
    maximal repeating substring, we cannot use the previous approach.

    Our approach initially is to go through each kind of letter for the string, and have a wild card, that we can use if the char does not match, can be used. If we run out of 
    wildcards and the next element is not the repeating char, then we shrink. This currently seems like a really slow approach but I don't have anything else in mind.


    Approach 2: instead of doing such a complicated procedure, especially since the shrinking part in gaps would be particularly hard to implement,
    we can use a different appraoch, 
    the shrink to trigger when the maximum freq of any character in our window exceeds the number of wildcards. 

      Initialising the left and right pointer 
      Incremeting the right pointer, while updating the maxfreq of the current window (between left and right pointer)
        if maxfreq exceeds k then do shrink 
      shrink:
        increment left till window lenght - maxferq <= k;
