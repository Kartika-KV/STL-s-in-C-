#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int> &v){
 cout<<"Size is "<<v.size()<<endl;
 for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
 }
 cout<<endl;
}
int main(){
vector<vector<int>> v;
int N;
cin>>N;
for(int i=0;i<N;i++){
int n;
cin>>n;
//vector<int> temp;
v.push_back(vector<int>());
for(int j=0;j<n;j++){
 int x;
 cin>>x;
 v[i].push_back(x);
}
//v.push_back(temp);
//v[0].push_back(9);
}
for(int i=0;i<N;i++)
   printvec(v[i]);
}
