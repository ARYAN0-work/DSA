class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n = strs.size();

        vector<vector<string>> ans;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {

            if (visited[i]) {
                continue;
            }

            vector<string> temp;
            temp.push_back(strs[i]);
            visited[i] = true;

            string s1 = strs[i];
            sort(s1.begin(), s1.end());

            for (int j = i + 1; j < n; j++) {

                if (visited[j]) {
                    continue;
                }

                string s2 = strs[j];
                sort(s2.begin(), s2.end());

                if (s1 == s2) {
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};

/*
1. Time Complexity: \(O(n^2 \cdot k\log k)\)

Our code has:

Outer loop: \(O(n)\)
Inner loop: \(O(n)\)
Sorting strings: \(O(k\log k)\)

Multiply them:

$$ n \times n \times k\log k $$

Therefore:

$$ \boxed{O(n^2 k\log k)} $$

Here, \(n\) = number of strings and \(k\) = maximum length of a string.

2. Auxiliary Space Complexity: \(O(nk)\)

We store:

visited → \(O(n)\)
temp → \(O(nk)\) in the worst case.
Temporary sorted strings → \(O(k)\) at a time.

Therefore:

$$ O(n)+O(nk)+O(k) $$

Simplifying:

$$ \boxed{O(nk)} $$

This excludes ans, the output itself.

3. Remember this trick 🧠

For time complexity:

Nested loops → usually multiply.
Sorting → \(k\log k\).
Combine the costs.

For space complexity:

Count the extra memory your algorithm uses.
Don't count the output when asked for auxiliary space.

Your brute-force solution:

Time: \(O(n^2 k\log k)\)
Auxiliary space: \(O(nk)\)
*/

/**
Bro, good question. Let's clear up both doubts separately.

1. Why don't we multiply by 2 for sorting twice?

We sort in two places:

sort(s1.begin(), s1.end());  // First string
sort(s2.begin(), s2.end());  // Second string

Sorting a string of length \(k\) takes \(O(k\log k)\).

Therefore, one comparison costs:

$$ O(k\log k)+O(k\log k) $$ $$ =O(2k\log k) $$

Here's the trick: Big-O notation ignores constant factors.

$$ \boxed{O(2k\log k)=O(k\log k)} $$

We still account for both sorting operations; the constant 2 simply disappears when expressing the complexity.

The nested loops can make up to \(O(n^2)\) comparisons, so:

$$ \boxed{\text{Time}=O(n^2k\log k)} $$
2. Understanding space complexity

Let's look at the variables that consume extra memory.

A. visited
vector<bool> visited(n, false);

Suppose there are 100 strings.

We need 100 Boolean entries.

Space:

$$ O(n) $$
B. s1 and s2
string s1 = strs[i];
string s2 = strs[j];

Suppose each string contains 10 characters.

We create copies of the strings we're comparing.

At any moment, we need space proportional to their lengths.

If the maximum string length is \(k\), the auxiliary space is:

$$ O(k) $$

Important: We reuse these variables for subsequent comparisons. We don't keep creating permanent copies for every comparison.

C. temp
vector<string> temp;

This is where things get interesting!

Suppose all 100 strings are anagrams of each other, and each string contains 10 characters.

Our temp could contain all 100 strings:

temp = {
    "abcdefghij",
    "jihgfedcba",
    // ... 98 more strings
};

That's approximately \(100 \times 10\) characters.

If there are \(n\) strings of maximum length \(k\), temp can store up to \(n \times k\) characters.

Therefore:

$$ O(nk) $$
D. Add everything together
Variable	Auxiliary space
visited	\(O(n)\)
s1 and s2	\(O(k)\)
temp	\(O(nk)\)

Total:

$$ O(n)+O(k)+O(nk) $$

The dominant term is \(O(nk)\).

Therefore:

$$ \boxed{\text{Auxiliary Space}=O(nk)} $$

This excludes ans, which is the output.

One important distinction

If we include the output, ans can also store all \(n\) strings, requiring \(O(nk)\) space.

But when someone asks for auxiliary space, we usually exclude the output itself.

Memory trick:

visited tracks strings → \(O(n)\).
String copies store characters → \(O(k)\).
temp can hold many strings → \(O(nk)\).

That's why our brute-force solution has \(O(n^2k\log k)\) time and \(O(nk)\) auxiliary space. */