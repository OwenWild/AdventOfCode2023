#include<iostream>
#include<string>
#include<vector>


using namespace std;
using std::vector;


int isNear(string x){

    for(int i = 0; i< x.length(); i++){



    }

    return 1;
};


class coord {
    public: 
    coord(int one, int two){
        x = one;
        y = two;
    }
    coord(){
        x = 0;
        y = 0;
    }
    int getX(){
        return x;

    }
    int getY(){
        return y;
    }
    


    void operator=(coord coord2){
        x = coord2.getY();
        y = coord2.getY();

    }
    
    

    private: 
    int x;
    int y;
};



class number{
    public: 
    number(coord coordFirst, coord coordSecond, int number, int length, int sNear){
        coord1 = coord(coordFirst.getX(), coordFirst.getY());
        coord2 = coord(coordSecond.getX(), coordSecond.getY());
        coord3 = coord(coordSecond.getX(), coordSecond.getY());
        length = length;
        numValue = number;
        symbolNear = sNear;
    }
    number(coord coordFirst, coord coordSecond, coord coordThird, int number, int length, int sNear){
        coord1 = coord(coordFirst.getX(), coordFirst.getY());
        coord2 = coord(coordSecond.getX(), coordSecond.getY());
        coord3 = coord(coordThird.getX(), coordThird.getY());
        length = length;
        numValue = number;
        symbolNear = sNear;
    }
    coord getCoord1(){
        return coord1;
    }
    coord getCoord2(){
        return coord2;
    }
    coord getCoord3(){
        return coord3;
    }

    int getNumVal(){
        return numValue;
    }
    bool isSymbolNear(){
        if(symbolNear != 0){return true;
        }
        return false;
    }
    void setSymbol(int x){
        symbolNear = x;
    }
    int getSymbolNear(){
        return symbolNear;
    }
    private:
    int length;
    coord coord1;
    coord coord2;
    coord coord3;
    int numValue;
    int symbolNear;
};


void vectPrint(vector<int> x){
    for(int i = 0; i< x.size(); i++){
        std::cout<<x[i];
    }
};
void vectPrint(vector<coord> x){
    for(int i = 0; i< x.size(); i++){
        cout<<"vector: "<<i<<" x: "<<x[i].getX()<<" y: "<<x[i].getY()<<endl;
    }
};

void vectPrint(vector<number> x){
    for(int i = 0; i<x.size(); i++){
        cout<<"vector: "<<i<<" with number: "<<x[i].getNumVal()<<endl;
    }
};

int numChecker(coord x, number y){
    int xCoord = x.getX();
    int yCoord = x.getY();

    int xCoordCheck1 = y.getCoord1().getX();
    int yCoordCheck1 = y.getCoord1().getY();
    int xCoordCheck2 = y.getCoord2().getX();
    int yCoordCheck2 = y.getCoord2().getY();
    int xCoordCheck3 = y.getCoord3().getX();
    int yCoordCheck3 = y.getCoord3().getY();

    //What are all the spots it could be?
    //The spot it could  be is 1 from the left of xCoord
    //The spot it could be is 1 underneath y coord
    // The spot it could be is 1 from the right of xCoord
    //The spot could be 1 above y coord
    // 
 
    /*
        If it is underneath, then x coord can be =, or 1 off ( for diag)
        If it is next to, y coords must be equal, and x is 1 off
    
    */

   // for to the left or right: 
   
    return 0;
};