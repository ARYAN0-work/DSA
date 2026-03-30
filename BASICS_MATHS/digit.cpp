// EXTRACTION OF DIGITS
 
//ex- 7789

// i need all the digits individually

// N= 7789 % 10 =9 why??

// 10 % => 10,20,30,40,50 => pattern all end with 10  [% =divides the no. and give remainder]

// 7789[7780] % 10=9 [you get the last digit]

// now how do you get the next didgit 8 => divide 7789 by 10 = 778.9[integer portion 778] - niow the question how do you extract the last digit 8

// simple 778[770] % 10 => 8

// for 7 => 778 /10 => 77
// 77 % 10 = 7

//  7% 10 = 7 => the remainder will be 7 it is divded by 0 [7/10] =0 

// ## extraction completded = in reverse order

// pseudo code
/*

ask for no N=

// the extraction goes from N[7789] to 0
while(N>0){
    // first extraction  => same for 2nd and 3 rd time
    last digit =N%10
    N=N/10;
}

*/