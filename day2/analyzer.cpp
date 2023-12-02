
#include<iostream>
#include<string>
#include<fstream>
#include<vector>



using namespace std;

int analyzer(string x){
    int gameNumber = 0;

    if(x.substr(6,1)==":"){
        gameNumber = stoi(x.substr(5,1));
    }
    if(x.substr(7,1)==":"){
        gameNumber = stoi(x.substr(5,2));
    }
    if(x.substr(8,1)==":"){
        gameNumber = stoi(x.substr(5,3));
    }

    for(int i = 5; i<x.length(); i++){
        

        if(x.substr(i,1)=="b" && (stoi(x.substr((i-3),2))>14))
        {
            cout<<"\n Game number: "<<gameNumber<<" x.substr(i, 1) : "<<x.substr(i,1)<<" and x.substr(i-2,2))): ."<<(x.substr((i-3),2))<<"."<<endl;
            return 0;
            
        }
        if(x.substr(i,1)=="g" && (stoi(x.substr((i-3),2))>13))
        {
            cout<<"\n Game number: "<<gameNumber<<" x.substr(i, 1) : "<<x.substr(i,1)<<" and x.substr(i-2,2))): "<<(x.substr((i-3),2))<<endl;
            return 0;
        }
        if(x.substr(i,1)=="d" && (stoi(x.substr((i-5),2))>12))
        {
            cout<<"\n Game number: "<<gameNumber<<" x.substr(i, 1) : "<<x.substr(i,1)<<" and x.substr(i-2,2))): "<<(x.substr((i-5),2))<<endl;
            return 0;
        }
        
    }
    cout<<x<<endl;
    return gameNumber;

}