#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<string>



using namespace std;
using std::cout;
using std::string;
using std::endl;
using std::ifstream;
using std::vector;

int findInt(string x){

if(x.substr(0,3)=="one"){
        return 1;
    }
    if(x.substr(0,3)=="two"){
        return 2;
    }
    if(x.substr(0,5)=="three"){
        return 3;
    }
    if(x.substr(0,4)=="four"){
        return 4;
    }
    if(x.substr(0,4)=="five"){
        return 5;
    }
    if(x.substr(0,3)=="six"){
        return 6;
    }
    if(x.substr(0,5)=="seven"){
        return 7;
    }
    if(x.substr(0,5)=="eight"){
        return 8;
    }
    if(x.substr(0,4)=="nine"){
        return 9;
    }
    
    
    return -1;

}