# terminology used to define TC & SC => growth rate 

- whenever we define speed of an algo we would say that it runs in order of the growth rate based off of given size input size . ex-> if given input is 10 then code run lets say 10 sec same for 1000

- algo runs in the order of end time 


public class BigOExamples {
    public static int getFirstElement(int[] arr) {
        return arr[0]; // Always one step, regardless of size
    }
}
// array take any no. n input and print a particular no. TC=> BIGO(1) OR CONST TC



public static int binarySearch(int[] arr, int target) {
    int left = 0, right = arr.length - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

BS=> sorted array we eleiminate half of the array then elimante one side then return target value 
TC => O(logn)



public static int linearSearch(int[] arr, int target) {

    for (int i = 0; i < arr.length; i++) {

        if (arr[i] == target)
            return i;
    }

    return -1;
}

LS=> Choosing a particular pnt from array and worst case we have to search the whole array 
TC => bigO(n) bcz f we have 1 million input then we choose 1 time only 


public static void mergeSort(int[] arr, int left, int right) {

    if (left < right) {

        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

private static void merge(int[] arr, int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int[] L = new int[n1];
    int[] R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {

        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }

        k++;
    }
}

merge sort => we just do sorting first place the 1st no. then make a new array then place the smallest you find frm 2nd digit 

we are doing n work and then we are doing binary search for each of this n => nlogn <= TC

public static void printPairs(int[] arr) {

    for (int i = 0; i < arr.length; i++) {

        for (int j = 0; j < arr.length; j++) {

            System.out.println(arr[i] + ", " + arr[j]);
        }
    }
}

BIGO(N SQUARE)




public static void printTriplets(int[] arr) {

    for (int i = 0; i < arr.length; i++) {

        for (int j = 0; j < arr.length; j++) {

            for (int k = 0; k < arr.length; k++) {

                System.out.println(
                    arr[i] + ", " + arr[j] + ", " + arr[k]
                );
            }
        }
    }
}

BIGO(N CUBE)




public static int fib(int n) {

    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

Fibonacci Recursion Explanation:

Fibonacci sequence:
0, 1, 1, 2, 3, 5, 8, 13...

Rule:
fib(n) = fib(n-1) + fib(n-2)

Example:
fib(5)

→ fib(4) + fib(3)

fib(4)
→ fib(3) + fib(2)

fib(3)
→ fib(2) + fib(1)

and so on...

------------------------------------------------

Why Time Complexity is High?

Each function call creates TWO more calls.

Like a tree:

                fib(5)
              /        \
          fib(4)      fib(3)
         /     \      /    \
     fib(3) fib(2) fib(2) fib(1)

Many repeated calculations happen.

Example:
fib(3) gets calculated multiple times.

------------------------------------------------

Time Complexity:

O(2^n)

because:
- every call branches into 2 more calls
- number of calls grows exponentially

This becomes VERY slow for large n.




public static void permute(String str, String ans) {

    if (str.length() == 0) {
        System.out.println(ans);
        return;
    }

    for (int i = 0; i < str.length(); i++) {

        char ch = str.charAt(i);

        String rest =
            str.substring(0, i) + str.substring(i + 1);

        permute(rest, ans + ch);
    }
}
Permutation Explanation:

Goal:
Generate all possible arrangements of characters.

Example:
Input = "ABC"

Possible outputs:
ABC
ACB
BAC
BCA
CAB
CBA

--------------------------------------------

How it works:

Suppose:
str = "ABC"

Step 1:
Choose one character.

A chosen:
remaining = "BC"

Now recursively solve:
permute("BC", "A")

--------------------------------------------

Then again:

Choose B:
permute("C", "AB")

Choose C:
permute("", "ABC")

When string becomes empty:
print answer.

--------------------------------------------

This creates a recursion tree.

For every position:
we try every possible remaining character.

That means:

n choices
then (n-1) choices
then (n-2)...

Total operations:

n × (n-1) × (n-2) × ... × 1

= n!

--------------------------------------------

Time Complexity:

O(n!)

Factorial growth is EXTREMELY fast.

Examples:
3! = 6
5! = 120
10! = 36,28,800

So permutation problems become huge very quickly.


+----------------+-----------+--------------+-------------------+
| Complexity     | n = 10    | n = 100      | n = 1000          |
+----------------+-----------+--------------+-------------------+
| O(1)           | 1         | 1            | 1                 |
| O(log n)       | 3.32      | 6.64         | 9.97              |
| O(n)           | 10        | 100          | 1000              |
| O(n log n)     | 33.22     | 664.39       | 9965.78           |
| O(n²)          | 100       | 10,000       | 1,000,000         |
| O(n³)          | 1,000     | 1,000,000    | 1,000,000,000     |
| O(2ⁿ)          | 1,024     | ~1.27×10³⁰   | ~1.07×10³⁰¹       |
+----------------+-----------+--------------+-------------------+

Main lesson:

Small growth rate = scalable algorithm
Large growth rate = slow algorithm

This table is basically teaching:
“How badly runtime grows when input size increases.”