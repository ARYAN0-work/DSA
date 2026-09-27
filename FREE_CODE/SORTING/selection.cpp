// select minimum && swap

/*                             ascending order
13   46   24   52    20   9     ->  9,13,20,24,46,52 
0    1    2    3     4    5     <- INDEXING  

9  | 46   24   52    20   13      STEP 1

9   13 |  24   52    20   46      STEP 2

9   13   20 |  52    24   46      STEP 3

9   13   20   24  |  52   46      STEP 4

                   N-2   N-1

9   13   20   24    40   52    |  STEP 5

*/


// OBSERVATION =>“At each index i, find the smallest element from i → end, and place it at index i.”

/* 
[13, 46, 24, 52, 20]
 index:
  0   1   2   3   4

  Step 1 → i = 0

You said:

SWAP AT INDEX 0, & MIN INDEX [0 → n-1]

Meaning:

Look from index 0 to 4
Find smallest
Swap with index 0

SWAP AT INDEX 0, & MIN INDEX [0-> N-1] => i = 0 → find min index in [0..n-1]
SWAP AT INDEX 1, & MIN INDEX [1-> N-1] => i = 1 → find min index in [1..n-1]
SWAP AT INDEX 2, & MIN INDEX [2-> N-1] => i = 2 → find min index in [2..n-1]

MIN = ARR[0] => considering

13< 13
ARR[1]< ARR[MIN]
40<13 NA 
....
*/

// PSEUDO CODE

/*
for(i=0;i<=n-2;i++){

| Pass | i | What happens                  |                                         
| ---- | - | ----------------------------- |                              
| 1    | 0 | place smallest at index 0     |                                   
| 2    | 1 | place 2nd smallest at index 1 |                                         
| 3    | 2 | place 3rd smallest at index 2 |                              
| 4    | 3 | place 4th smallest at index 3 |                            
| ❌ 5  | 4 | NOT needed                    |  => why

i = 4 (last index)

There is:

Only one element left
No comparison needed
It is already in correct position

[ | unsorted ]        i = 0
[ x | unsorted ]      i = 1
[ x x | unsorted ]    i = 2
[ x x x | unsorted ]  i = 3
[ x x x x | last ]    STOP    =>That last element doesn’t need sorting.


  min =i
  for(j=i;j<=n-1;j++){
  if(arr[j]<arr[min])min =j
  }
}
*/

// how to swap two no.'s

/*
swap(arr[min],arr[i]);

arr[i]          arr[min]
15 =>12          12=> 15

12->temp = arr[min]
arr[min] =arr[i]
arr[i] = temp 
*/