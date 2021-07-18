#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(6);
    v.pop_back();
    printvec(v);
    //Creting vector of fixed size and with some values filled 
    // vector<int> v(5,3);
    //printvec(v);
  /*  vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        cout<<"Current array is  ";
        printvec(v);
    }
    cout<<"Final array is  ";
    printvec(v);*/
}

