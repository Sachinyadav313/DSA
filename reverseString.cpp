#include <iostream>
using namespace std;
void stringReverse(string &str,int i,int size){
    
    if(i>=size){
        cout<<str<<endl;
        return;
    }
    swap(str[i],str[size-1]);
    stringReverse(str,i+1,(size)-1);
    

}
int main(){
    string str="abcde";
    int size=str.size();
    /*for(int i=0;i<size/2;i++){
        swap(str[i],str[size-1-i]);
        

    }
    cout<<str;*/
    stringReverse(str,0,str.size());
    //cout<<str;
}