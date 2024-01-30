/* backtrackin is simple recursion jisme recurie call se wapas
 aane ke time pr kuch additional operation perform krne hote hain*/

#include <iostream>

using namespace std;
void printPermutation(string &str, int i){
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    for(int k=i;k<str.length();k++){
        swap(str[i],str[k]);
        printPermutation(str,i+1);
        //backtracking kyuki jo bhi changes swap se hua tha vo hmare original string me hue thi
        swap(str[i],str[k]);
        //ye step backtracking ka hai aur esase jo kiya usko hta diya 
    }
}
int main(){
    string str="abc";
    int i=0;
    printPermutation(str,i);
}