#include <iostream>
using namespace std;
void function(string &str, char &key, int i,int &j){
    if(i>=str.size()){
        return;
    }
   else if(str[i]==key){

   j=i;
   }
   function(str,key,i+1,j);
   

}
int main(){
    string str="abcddedf";
    int j=-1,i=0;
   char key='d';
   function(str,key,i,j);
   cout<<j;
}