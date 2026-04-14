// ITS FOR GCD IN SHORT WAY

/*
gcd(a,b) = gcd(a-b,b)              {a>b}
gcd(20,15) =gcd(5,15) =gcd(15,5) =gcd(10,5) =gcd(5,5) =gcd(0,5)

but=>

gcd(52,10) -> 42 -> 32 -> 22 -> 12 -> gcd(2,10) -> 8 -> 6 -> 4-> 2-> gcd(0,2)  -=> ans 2 

alternative=>

gcd(a,b) == gcd(a%b,b)

greater % smaller -> one of the term is 0 thern the other is gcd 


PSUDO CODE=>

while(a>0 && b>0){

if(a>b)   a= a%b;
else      b=b%a;
}

if(a==0)  print(b)
else      print(a)

TC=>O(logfie(min(a,b))) => the reason is simoke we are taking min so thats why fie ,log bcz you reducing no. by divison continuosly
*/