#include <iostream>
using namespace std;

/*
Let's consider all possible cases.

When ‘N’ = 1, i.e ‘S’ is ‘1’, it's easy to see that the final string can be ‘1’ or ‘0’.
When ‘N’ = 2, i.e ‘S’ is ‘11’, in one operation we can make it ‘00’ with 1st type of operation, ‘01’ with 2nd type of operation, ‘10’ with the second type of operation. After the second operation, we can also get ‘11’ by doing the 1st type of operation on ‘00’. Of Course for operations more than 2 times we can get any of these 4 strings
When ‘N’ = 3, i.e. ‘S’ is ‘111’, similarly as above in one operation we can get 4 strings [ ‘000’, ‘010’, ‘101’, ‘011’ ]. And for ‘M’ = 2 i.e after 2 operations, we can get 7 strings :[  ‘000’, ‘001’, ‘010’, ‘100’, ‘101’, ‘110’, ‘111’ ]. For ‘M’ > 3. We can get all possible 8 strings of size ‘3’.
When ‘N’ > 3, i.e ‘S’ is ‘1111...’,  In this case, we can observe that adding a new character in a string of size ‘3’ doesn’t affect the number of resulting strings, as the pattern is repeated after the 3rd index. For example, let's say we perform the 2nd type of operation on ‘S’ we get ‘010101….’ repeating pattern after every 2 characters, similarly if we perform 4th type of operation we get ‘011011...’ repeating pattern after every 3 characters, So no matter what operation we do we will get a string with repeating pattern with almost after 3 characters.
 
So for ‘N’ > 3, the whole string can be uniquely defined by only the first three characters.

Algorithm:

If ‘M’ == 0, the answer will be only ‘1’, so return 1.
If ‘N’ == 1, the resulting string can be ‘1’ or ‘0’, so return 2.
If ‘N’ == 2
If ‘M’ == 1, we can get only 3 strings, return 3.
If ‘M’ >= 2, we can get all 4 possible strings, return 4.
If ‘N’ >= 3
If ‘M’ == 1, we can get only 4 strings, return 4.
If ‘M’ == 2, we can get 7 possible strings, return 7.
If ‘M’ >= 3, we can get all possible strings of size 3, so return 8.
*/

int main(){
    //write code below
    
    return 0;
}