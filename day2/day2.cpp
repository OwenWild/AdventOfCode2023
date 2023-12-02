#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include"analyzer.h"


using namespace std;


int main(){

    ifstream file;
    file.open("input2.txt");

    vector<string> vect;
    string result;
    int line = 0;
    while(getline(file, result)){
        cout<<"new line \n"<< result;
    }
    int sum = 0;
    for(int i = 1; i<vect.size(); i++){
        cout<<i<<"is this one"<<vect[i]<<endl;
        sum += analyzer(vect[i]);
    }

    std::cout<<"final sum is " <<sum;


    file.close();
    return 0;
}