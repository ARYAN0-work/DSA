Exactly. This is the important part of this problem. Don't memorize "Merge Arrays = two pointers." Let's understand how you could notice it yourself.

1. Look at what made brute force slow

Your brute force basically does:

nums1[i]
   ↓
search ALL of nums2

Then again:

nums1[i+1]
   ↓
search ALL of nums2

We're repeatedly searching the same array.

The question gives us a very important piece of information:

Both arrays are sorted in ascending order by ID.

That information is basically a giant hint.

2. Look at the arrays

Imagine:

nums1: [1,5] [3,7] [5,2] [8,4]
         ↑

nums2: [1,2] [2,6] [5,3] [7,9]
         ↑

We only care about the IDs:

nums1: 1  3  5  8
        ↑

nums2: 1  2  5  7
        ↑

Because they're sorted, we don't need to search randomly.

We can compare the two current IDs.

1 vs 1

Equal → combine.

Then:

nums1: 1  3  5  8
           ↑

nums2: 1  2  5  7
           ↑

Now:

3 vs 2

2 is smaller.

Since nums2 is sorted, there is no point looking at later nums2 elements for ID 3 before processing 2.

So we take 2.

Then:

nums1: 1  3  5  8
           ↑

nums2: 1  2  5  7
              ↑

Now:

3 vs 5

3 is smaller → take 3.

And so on.

3. THIS is the observation

The pattern is:

Two collections are already sorted + I need to process/merge them in sorted order.

That should make you think:

             SORTED
                ↓
        compare current elements
                ↓
          take smaller one
                ↓
        move that pointer

That's the classic two-pointer / merge pattern.

You have probably seen the exact same idea in merge sort.

4. Why are two pointers enough?

Because we only need to know:

nums1[i]
nums2[j]

We don't need:

nums1[i+1], nums1[i+2], ...
nums2[j+1], nums2[j+2], ...

yet.

The current smallest unprocessed ID must be one of those two current IDs.

That's the key insight.

5. The three cases

Now let's derive the code ourselves.

Case 1: Equal
nums1[i][0] == nums2[j][0]

Example:

3 == 3

Combine:

[3, value1 + value2]

Move both:

i++;
j++;

Because we've completely processed ID 3 from both arrays.

Case 2: nums1 ID is smaller
nums1[i][0] < nums2[j][0]

Example:

3 < 5

Take nums1:

ans.push_back(nums1[i]);

Then:

i++;

Why only i?

Because 3 is now processed. 5 hasn't been processed yet.

Case 3: nums2 ID is smaller
nums1[i][0] > nums2[j][0]

Take nums2:

ans.push_back(nums2[j]);

Then:

j++;