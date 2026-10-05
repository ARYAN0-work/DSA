/*
This is where the "two pointer" recognition comes from

You should start thinking two pointers when you see something like:

"Rearrange the array so that X is on one side and Y is on the other."

Because naturally:

left side  → should satisfy condition A
right side → should satisfy condition B

Examples:

negatives on one side, positives on other
0s on one side, 1s on other
even on one side, odd on other
characters of one type on one side
partition around a pivot

These are partitioning problems, and two pointers often fit naturally.

 */

/*
But here's the important part

Your solution doesn't need two pointers.

You used:

count
  ↓
[even | even | ? | ? | ?]

Your i is scanning the array, while count marks the boundary.

That's basically another form of partitioning.

So there are two mental models:

Your approach:

i → → → → → → →

[ EVEN | UNKNOWN ]
        ↑
      count

Two-pointer approach:

L → →       ← ← R

[ UNKNOWN / UNKNOWN / UNKNOWN ]

Both are exploiting the same underlying idea:

Maintain a boundary between elements that are already in the correct group and elements that aren't processed yet.

That's the deeper pattern I want you to notice.

Don't memorize "Sort Array By Parity = two pointers."

Instead train yourself to ask:

"What property must the left side satisfy, and what property must the right side satisfy?"

If you can answer that, the two-pointer approach often reveals itself.
*/ 

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int i=0,j=nums.size()-1;

        while(i<j){

            if(nums[i]%2==0){
                i++;
            }

            else if(nums[j]%2!=0){
                j--;
            }

            else{
                swap(nums[i],nums[j]);
            } 
        }


        return nums;
    }
};