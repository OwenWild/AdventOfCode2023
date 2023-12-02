#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include"analyzer.h"


using std::ifstream;
using std::vector;
using std::string;
using std::endl;



int main(){
    int sum = 0;

    ifstream file;
    file.open("input2.txt");

    vector<string> vect;
    string result;
    int line = 0;
    while(getline(file, result)){

        vect.push_back(result);
    }

    for(int i = 0; i<vect.size(); i++){

        sum += analyzer(vect[i]);
        cout<<sum;
    }

    std::cout<<"final sum is " <<sum;


    file.close();
    return 0;
}