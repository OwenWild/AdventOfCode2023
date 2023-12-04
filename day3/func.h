#ifndef FUNC_H
#define FUNC_H


#include<iostream>
#include<string>
#include<vector>



using namespace std;




int isNear(string x);


class coord{
    public: 
    coord(int one, int two);
    coord();
    int getX();
    int getY();
    void operator=(coord coord2);


    private: 
    int x;
    int y;

};


class number{
    public: 
    number(coord coordFirst, coord coordSecond, int number, int length, int symbolNear);
    number(coord coordFirst, coord coordSecond, coord coordThird, int number, int length, int symbolNear);
    coord getCoord1(number x);
    coord getCoord2(number x);
    coord getCoord3(number x);
    int getNumVal(number x);
    bool isSymbolNear(number x);


    private:
    int length;
    coord coord1;
    coord coord2;
    coord coord3;
    int numValue;
    int symbolNear;
};

void vectPrint(vector<int> x);
void vectPrint(vector<coord> x);



#endif