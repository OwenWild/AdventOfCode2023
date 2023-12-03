#include<iostream>
#include<string>
#include<vector>

#include"func.cpp"
#include<fstream>

using namespace std;


int main(){


    vector<string> vect;
    ifstream file;
    file.open("input3.txt");
    string result;
    while(getline(file, result)){
        vect.push_back(result);
    }
    // Now we have a vector with a 140 strings in it, and we need to use
    // all of those, to create a vector with all the symbol coords in it. 


    vector<coord> symbolVect;

    int sum = 0;
    for(int i = 0; i<vect.size();i++){
        for(int p = 0; p<vect[i].length(); p++){

        string x = vect[i].substr(p,1);

        char q = x[0];

        if(q == '$' || q== '+' || q=='*'||q=='#'||q == '=' || q=='-'||q=='&'||q=='/'||q=='@'||q=='%'){
            coord c = coord(p, i);
            symbolVect.push_back(c);
            cout<<q<<endl;
        }

        }
    }
    //Now I have all the coordinates of the symbols in a vector
    vector<number> numVect;
    for(int i = 0; i<vect.size();i++){
        string x = vect[i];
        for(int p = 0; p<vect[i].length(); p++){
            
            try{

            if(stoi(x.substr(p, 1))<10){
                try{
                if(stoi(x.substr(p+1, 1))<10){
                    try{
                    if(stoi(x.substr(p+2,1))<10){
                        // Right here is if there are 3 numbers in a row
                        coord coord1 = coord(i, p);
                        coord coord2 = coord(i, p+1);
                        coord coord3 = coord(i, p+2);
                        number n = number(coord1, coord2, coord3, stoi(x.substr(p,3)), 3, 0);
                        numVect.push_back(n);
                        cout<<"\n FOUND NUMBER: \n"<<x.substr(p,3)<<"\n \n "<<endl;



                            // this needs to be at the end
                           p++;
                        p++;

                    }

                    }
                    catch(exception e){
                        coord coord1 = coord(i, p);
                        coord coord2 = coord(i, p+1);
                        coord coord3 = coord(i, p+1);
                        number n = number(coord1, coord2, coord3, stoi(x.substr(p,3)), 3, 0);
                        numVect.push_back(n);
                        cout<<"\n FOUND NUMBER: \n"<<x.substr(p,3)<<"\n \n" <<endl;
                        p++;
                    }
                }
                }
                catch(exception e){
                    cout<<"This is weird..."<<endl;
                }
            }
            }
            catch(exception e){
                cout<<" . ";
            }
        }
    }
    vectPrint(numVect);

    for(int i = 0; i<numVect.size(); i++){

        for(int p = 0; p<symbolVect.size(); p++){

                cout<<"Here is number:  \n"<<p<<i<<endl;
            if(numChecker(symbolVect[p], numVect[i])==1){


            numVect[i].setSymbol(numChecker(symbolVect[p], numVect[i]));
            
            }
            
        }
    }
    cout<<"this";

    for(int i = 0; i<numVect.size(); i++){
            cout<<numVect[i].getSymbolNear();

        if(numVect[i].isSymbolNear()){
            sum += numVect[i].getNumVal();
            cout<<"\n Here is the number" <<numVect[i].getNumVal()<<" \n ";
        }
    }
    // Great, now we have all the numbers in vectors, but only the 3 digit ones, finish with adding the 2 digit ones too...

    // Now we have the 2 digit ones as well, in the vectors
    // Now we need to find a way to check the coordinates against eachother, to see if they 
    // are 'part numbers'


    cout<<"Final sum : "<<sum;







   // the thing is 140 by 140 
   // Could I store everything as coordinates?
   // There are 2 and 3 digit numbers




    return 0;
}




/*

Plan for this code: 
Get the coordinates for all of the symbols in the file
Then get the left coordinates and lengths of each of the numbers, and their 
lengths, in a number class

Then compare the coordinates of the numbers, and compare that with symbol coords
Once that is done, you can now sum up all of those numbers


What classes I need: 
I need a get symbols class, that finds the coords
I want these coords to be returned in a vector, which I then add all those coords
to a vector with all the symbols in them

Then I want to do a number checker, which checks the length of the numbers
these numbers are going to have quite a few values: the actual number themselves,
the number of coordinates, and then 2 or 3 coordinates
Then there is going to be a number vs symbol checker
This will check if theres any symbols near any of the three coordinates,
This can be done adding an int at the end of the number objects, so they'll have 
another value.
If theres a symbol near them, they'll have a 1, if not they'll have a 0
Then, we'll go through them, and if they have a 1, we'll add their number to the sum





*/