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
        std::cout<<x[i]<<" "<<endl;
    }
};
void vectPrint(vector<coord> x){
    for(int i = 0; i< x.size(); i++){
        cout<<"X coord :" << x[i].getX()<<"Y coord: "<<x[i].getY()<<endl;
    }
};

void vectPrint(vector<number> x){
    for(int i = 0; i<x.size()-300; i++){
        cout<<"X coord 1: "<<x[i].getCoord1().getX()<<" Y coord : " <<x[i].getCoord1().getY()<<" Value: "<<x[i].getNumVal()<<endl;

    }
};

int numChecker(coord x, number y){
    int xCoord = x.getX();
    int yCoord = x.getY();

    int xCoordCheck1 = y.getCoord1().getX();
    int xCoordCheck2 = y.getCoord2().getX();
    int xCoordCheck3 = y.getCoord3().getX();

    int yCoordCheck1 = y.getCoord1().getY();
    // They will always be the same y level
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
   if(yCoord == yCoordCheck1){ // Ify the y coords are the smame...
        if(xCoord +1 == xCoordCheck1){ // Here, if theres a symbol to the left
            return 1;
        }
        if(xCoord -1 == xCoordCheck3 ){ // here to the right
            return 1;
        }
        
   }
   // NEXT part, above or below:
   if((xCoord == xCoordCheck1 || xCoord == xCoordCheck2 || xCoord == xCoordCheck3 || xCoord == xCoordCheck1 -1 || xCoord == xCoordCheck3 + 1)){
        if(yCoord -1== yCoordCheck1){
            return 1;
        }
        if(yCoord +1 == yCoordCheck1){
            return 1;

        }
    // this checks diags and above and below
   }
    

    return 0;
};