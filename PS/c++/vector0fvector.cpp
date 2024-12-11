#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,x,y;
    cout<<"Enter n= ";
    cin>>N;
    vector<vector<int>>v;
    for(int i=1;i<=N;i++){
        vector<int>point(2);
        cin>>x>>y;
        point[0]=x;
        point[1]=y;
        v.push_back(point);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
}
