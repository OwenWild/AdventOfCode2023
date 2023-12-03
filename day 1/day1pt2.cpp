#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include "strings.h"


using namespace std;
using std::cout;
using std::string;
using std::endl;
using std::ifstream;
using std::vector;

int main(){

    vector<string> vect;

    ifstream file("input.txt");
    file.open("input.txt");

    string result;
    //line counter

    ifstream filein("input.txt");
    while(filein >> result)
    { 
        vect.push_back(result);

    }

    file.close();
    int sum = 0;
    int ball;
    for(int i = 0; i<vect.size(); i++){

            int first = 0;
            int last = 0;

        for(int p = 0; p<vect[i].length(); p++){
            string x = vect[i];
            for(int q = 0; q<10; q++){

                int intFound = findInt(x.substr(p,x.length()-1));

                if(intFound!=-1 && first!=0){
                    last = intFound;
                    
                }
                if(intFound!=-1 &&first==0){
                    first = intFound;
                }
                if(((x.at(p)-'0')==q)&&(first!=0))
                {
                    last = (x.at(p)-'0');
                    
                }
                if(((x.at(p)-'0')==q)&&(first==0)){
                    first = (x.at(p)-'0');
                }

        
            }


        }
        cout<<"First2: "<<first<<"Last2: "<<last;
        if(last==0){last=first;}
        sum += (first*10 + last);
        cout<<"After number: "<<i<<"The sum is: "<<sum<<endl;
    }

    cout<<"final sum is: "<<sum;

    return 0;
}