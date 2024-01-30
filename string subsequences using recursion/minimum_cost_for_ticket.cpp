#include <bits/stdc++.h>
using namespace std;
int fun(int days[],int coast[],int i){
if(i>=sizeof(days)){
    return 0;
}
//one day pass
int one=coast[0]+fun(days,coast,i+1);

//seven day pass

int expieredDay7=days[i]+7-1;
int j=i;
while (j<sizeof(days)&&days[j]<=expieredDay7)
{
    j++;
}
int seven=coast[0]+fun(days,coast,j);
// 30 day pass
int expieredDay30=days[i]+30-1;
int k=i;
while (k<sizeof(days)&&days[k]<=expieredDay7)
{
    k++;
}
int thirty=coast[2]+fun(days,coast,k);
return min(one,min(seven,thirty));
}
int main()
{
    int days[] = {1,2,3,4,5,6,7,8,9,10,30,31};
    int coast[] = {2,7,15};
    int i = 0;
    cout << fun(days,coast,i);
}