// GCD/HCF

/*
9-> 1,3,9
12->1,2,6,12,3,4                    GCD[9,12] = 3 

11-> 1,11                           GCD[11,13] =1
13-> 1,13

GCD[20,40] = 

n1=9  & n2=12

gcd=1

for(i=1;i<=n;i++){
 if(n1%i==0 &7 n2%i==0)
 gcd =i;
}

but what if n1 =12 & n2 =9 then the loop  will go to 12 => but 10 will not divide 9 for sure so thange will be =>

for(i=1;i<=min(n1,n2);i++){
 if(n1%i==0 &7 n2%i==0)
 gcd =i;
}

TC => O(min(n1,n2))

ANOTHER METHOD MORE USEFUL=>

N1=20, N2 =40

for(i=min(n1,n2); && n2%i ==0)
 {
  if(n1%i==0 && n2%i==0){
  print(i)
  break; // it eill end the outer loop also
  }
 } // in this you will have better time-complexity for alot of cases

 but the worst case will be O(min(n1,n2))

 if N1= 11  ,  N2=13

 the ans will be 1 so the above code will run upto 1 iteration so the tc will still be this O(min(n1,n2))

 and for tc always take worst case
*/ 