#include<iostream>
//#include "hero.cpp"
using namespace std;

class Hero {

  // attributes
  
private:
  int health;
   public:
  char level;
  
Hero() {

cout<<"Constructor Called:"<<endl;

}

// 	Parameterized Constructor

Hero (int health) {
	cout<<"this ->"<<this<<endl;
	this->health = health;
}



Hero (int health , char level) {
	cout<<"this ->"<<this<<endl;
	this->level = level;
	this->health = health;
}

void print(){
	
	cout<<level<<endl;
}

int getHealth(){
	return health;
}

char getLevel(){
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
	
 Hero a(10);
cout<<"Adress of a:"<<&a<<endl;
a.getHealth();
 

/* 
 
 //static allocation
 cout<<"Hi"<<endl;
Hero ali;
cout<<"Hello\n";

// dynamic allocation
Hero *b = new Hero;

/*

h1.setHealth(70);
h1.setLevel('D');
cout<<"Health ="<<h1.getHealth()<<endl;
cout<<"Level ="<<h1.level<<endl;



// dynamic allocation
Hero *b = new Hero;

b->setHealth(90);
b->setLevel('F');
cout<<"Health ="<<(*b).getHealth()<<endl;
cout<<"Level ="<<(*b).level<<endl;

// Alternative methode

cout<<"Health ="<<b->getHealth()<<endl;
cout<<"Level ="<<b->level<<endl;

//cout<<"size of:"<<sizeof(h)<<endl;

/* Use getter
h1.getHealth();

// Use setter

h1.setHealth(70);
h1.level = 'A';

cout<<"Health is: "<<h1.getHealth()<<endl;
cout<<"Level is: "<<h1.level<<endl;

*/
return 0;

}


