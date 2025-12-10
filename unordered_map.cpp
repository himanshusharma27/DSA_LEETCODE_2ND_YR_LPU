// count frequency [ 1 , 2 , 3, 3 , 4]


#include<bits/stdc++.h>
using namespace std ;

int main(){
    unordered_map<string , int> mp;

    mp["Juice"] = 50;
    mp["Pizza"] = 120;
    mp["choclate"] = 30;

    cout<<"Price of the pizza is "<<mp["Pizza"]<<endl;


    if(mp.find("Juice") != mp.end()){
        cout<<"Juice is a option "<<endl;
    }

    for(auto &p : mp){
        cout<<p.first<<" == "<< p.second<<endl;
    }
}
