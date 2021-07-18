#include<iostream>
#include<utility>
using namespace std;
int main(){
    //pair<int,string> p;
   // Declaration of pair
   /* p=make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<<endl;
    */
   /* Another declaration of pair
    p={2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;*/
    //Array in Pairs
/*    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={4,5};
    p_array[2]={7,8};
    for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}*/
// Taking input from user
  pair<int,string> p;
  cin>>p.first;
  cin>>p.second;
  cout<<p.first<<" "<<p.second<<endl;
}
