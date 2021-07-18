#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void printvec(vector<pair<int,int>> &v){
    cout<<"Size is  "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
      cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main(){
   // vector<pair<int,int>>v={{1,2},{4,5},{8,9}}; // declaration of vector of pairs 
    // user input values
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       int x,y;
       cin>>x>>y;
       v.push_back({x,y});
    }
    printvec(v);

}
