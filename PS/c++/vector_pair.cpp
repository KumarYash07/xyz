#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
// int main(){
//     vector<pair<int,string>> v;
//     v.push_back(make_pair(1,"amit"));
//     v.push_back(make_pair(2,"ajit"));
//     v.push_back(make_pair(3,"yash"));
//     v.push_back(make_pair(4,"suyash"));
//     for(int i=0; i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
// }

// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     cout<<q.front()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     return 0;
// }

// int main(){
//     queue<pair<int,float>>q;
//     q.push(make_pair(1,75.02));
//     q.push(make_pair(2,95.02));
//     q.push(make_pair(3,35.22));
//     q.push(make_pair(4,70.92));
//     q.push(make_pair(5,60.12));

//     pair<int,float>p;
//     p = q.front();
//     cout<<p.first<<" "<<p.second<<endl;
//     q.pop();
//     p = q.front();
//     cout<<p.first<<" "<<p.second<<endl;
// }


// int main(){
//     vector<int>v1,v2,v3,v4,v5;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);

//     v2.push_back(4);
//     v2.push_back(5);
//     v2.push_back(6);
//     v2.push_back(7);

//     v3.push_back(8);
//     v3.push_back(9);

//     v4.push_back(10);
//     v4.push_back(11);
//     v4.push_back(12);

//     v5.push_back(13);
//     v5.push_back(14);
//     v5.push_back(15);
//     v5.push_back(16);
    

//     vector<vector<int>>vv;
//     vv.push_back(v1);
//     vv.push_back(v2);
//     vv.push_back(v3);
//     vv.push_back(v4);
//     vv.push_back(v5);

//     int r=vv.size();
//     for(int i=0; i < r ;i++){
//         for(int j=0; j<vv[i].size();j++){
//             cout<<vv[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


int main(){
    vector<int>v1,v2,v3,v4,v5;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);

    v3.push_back(8);
    v3.push_back(9);

    v4.push_back(10);
    v4.push_back(11);
    v4.push_back(12);

    v5.push_back(13);
    v5.push_back(14);
    v5.push_back(15);
    v5.push_back(16);
    

    vector<vector<int>>vv;
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);
    vv.push_back(v4);
    vv.push_back(v5);

    int r=vv.size();
    for(int i=0; i < r ;i++){
        for(int j=0; j<vv[i].size();j++){
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0; i < r ;i++){
        if(i%2!=0){
            reverse(vv[i].begin(),vv[i].end());
        }
        for(int j=0; j<vv[i].size();j++){
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


