#include <iostream>
using namespace std;
void subsequences(string str, string output, int i){
    if (i>=str.length())
    {
        cout<<output<<"\n";
        return;
    }
    //exclude
    char ch=str[i];
    subsequences(str,output,i+1);
    //include
    output.push_back(ch);
    subsequences(str,output,i+1);
}
int main(){
    string str="abc";
    string output="";
    subsequences(str,output,0);
}