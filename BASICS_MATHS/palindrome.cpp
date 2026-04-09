// PALINDROME = REVERSE OF NO. IS SAME => 121

// use rev. no and now => if i compare rev no. with the orignal no. n i can use if else to see its a palindrome or not but wait at the end of the day n has 0 so does it have the orignal number no bcz we were we are doing operations with n which has made  n to be 0 at the end of the day so what i need to do is i need to store the duplictate of n in some top variable and instead of comparing with n i can compare it with duplicate bcz n will be 0 at the end of the extraction of digits 

/* n=7789
 rev N =0
  while(N>0){    
   last digit =N % 10  | 7789%10 | 778 % 10
   N =N/10      | 7789/10=778 | 778 /10

   
   revnum=(revnum*10) + last digit  | 9 | 98 [CC karke dekhle]

   if (revNum == n) YES
   else ()
  }

*/