#include<iostream>
using namespace std;

// creating a class
class Hero {
    // properties
    private:
    int health;
    public:
    char level;

    Hero(){
        cout << "Constructor called" << endl;
    }

    //Paramaterized constructor 
    Hero(int health ){
        cout << "this ->" << this << endl;
        this -> health = health;
    }

    void print(){
        cout << level << endl; // no error 
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){

   
   Hero suresh(70 , 'C');


   Hero R(suresh);
   


    // //static allocation 
    // Hero a;
    // a.setLevel('B');
    // a.setHealth(80);

    // cout << "level is " << a.level << endl;
    // cout << "health is " << a.getHealth() << endl;

    // // dynamically
    // Hero *b = new Hero;
    // b->setHealth(70);
    // b->setLevel('A');
    // cout << "level is " << (*b).level << endl;
    // cout << "health is " << (*b).getHealth() << endl;

    // cout << "level is " << b->level << endl;
    // cout << "health is " << b->getHealth() << endl;



//     //creation og object
//     Hero ramesh;

//     //ramesh.health = 70;
//     cout << "Ramesh health is :" << ramesh.getHealth() << endl;
//     //use setter 
//     ramesh.setHealth(70);
//     ramesh.level = 'A';

//     cout <<"Health is: " << ramesh.getHealth() << endl;
//     cout <<"Level is: " << ramesh.level << endl; // error because private accessed outside class 


//    // cout << "size : " << sizeof(h1) << endl; 

    return 0;
}
