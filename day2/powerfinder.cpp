
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
    int power = 0;
    int currRed = 0;
    int currBlue = 0;
    int currGreen = 0;
    for(int i = 5; i<x.length(); i++){
        
        
        if(x.substr(i,1)=="b" && (stoi(x.substr((i-3),2)))>currBlue)
        {
            cout<<"\n Game number: "<<gameNumber<<" x.substr(i, 1) : "<<x.substr(i,1)<<" and x.substr(i-2,2))): ."<<(x.substr((i-3),2))<<"."<<endl;
            currBlue = stoi(x.substr((i-3),2));
            
        }
        if(x.substr(i,1)=="g" && (stoi(x.substr((i-3),2))>currGreen))
        {
            cout<<"\n Game number: "<<gameNumber<<" x.substr(i, 1) : "<<x.substr(i,1)<<" and x.substr(i-2,2))): "<<(x.substr((i-3),2))<<endl;
            currGreen = stoi(x.substr((i-3),2));
        }
        if(x.substr(i,1)=="d" && (stoi(x.substr((i-5),2))>currRed))
        {
            cout<<"\n Game number: "<<gameNumber<<" x.substr(i, 1) : "<<x.substr(i,1)<<" and x.substr(i-2,2))): "<<(x.substr((i-5),2))<<endl;
            currRed = stoi(x.substr((i-5),2));
        }
        
    }
    power = currRed*currBlue*currGreen;
    cout<<x<<endl;
    return power;

}