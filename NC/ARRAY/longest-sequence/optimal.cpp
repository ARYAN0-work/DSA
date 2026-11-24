






/*
Our algorithm will have three main steps.

Step 1: Insert every number into an unordered_set.

Step 2: Iterate through the numbers.

For each number:

Check whether the previous number (num - 1) exists.
If it exists, skip this number because it's not the beginning of a sequence.
If it doesn't exist, we've found the beginning of a sequence!

Step 3: Starting from that number, keep checking whether the next number exists. Count the sequence and update the longest length.
*/
