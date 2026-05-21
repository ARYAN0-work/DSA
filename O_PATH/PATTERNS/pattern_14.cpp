#include<bits/stdc++.h>
using namespace std;

void pattern14(int n){
    for (int i = 1; i <= n; i++)
    {   

        // imp part hur jagah 1 based indexing nhi hogi 
        for (int j = 0; j < i; j++)
        {    
            // use single quotes not double quotes   char() is a type cast (type conversion).It converts a value into the character type.
            // use singkle quotes for char
            cout<< char('A' + j);
        }
        cout<< endl;
    }
    
/*
=> if you rite 'A'+j
   except char('A' + j)

'A' = 65
'A' + 0 → 65 → A
'A' + 1 → 66 → B
'A' + 2 → 67 → C
'A' + 3 → 68 → D

*/
}



int main(){

    int n = 5;
    pattern14(n);

}