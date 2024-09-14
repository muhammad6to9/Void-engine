/*©toMuhammad Adam 2024*/
//voidengine
#include <iostream> 
#include <cmath> 
#include <math.h> 
#include <string> 
#include <random> 
#include <typeinfo> 
#include <vector> 
#include <limits> 
#include <cstdlib> 
#include <ctime> 
#include <unistd.h>
#include <cstdio>
#include <iomanip>
#include <atomic>
#include <thread>
#include <fstream>
#include <algorithm>
#include <chrono>
#include <conio.h>

using namespace std;

//public variables for boardpr()
int incr=1;
int boardind=0;
int boardind1=0;
int boardindref=boardind;
vector<string> height{"1","2","3","4","5","6","7","8"};
vector<string> width{"A","B","C","D","E","F","G","H"};


//board print
void boardpr(){
cout<<height[boardind+7]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;

if(incr==9){
incr=1;
boardind=0;
boardind1=0;
cout<<"\n"<<height[boardind+6]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;if(incr==9){
incr=1;
boardind=0;
boardind1=0;
cout<<"\n"<<height[boardind+5]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;if(incr==9){
incr=1;
boardind=0;
boardind1=0;
cout<<"\n"<<height[boardind+4]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;if(incr==9){
incr=1;
boardind=0;
boardind1=0;
cout<<"\n"<<height[boardind+3]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;if(incr==9){
incr=1;
boardind=0;
boardind1=0;
cout<<"\n"<<height[boardind+2]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;if(incr==9){
incr=1;
boardind=0;
boardind1=0;
cout<<"\n"<<height[boardind+1]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;if(incr==9){
incr=1;
boardind=0;
boardind1=0;
cout<<"\n"<<height[boardind]<<"-"<<"|";
while(incr<=8){
cout<<width[boardind1];
boardind1++;
cout<<"|";
incr++;}
}}
}}
}}
}}
}}
}}
}}}

//public variables for player1()
char player,cho;

void player1(){
cout<<"\n\nenter what would you choose to play\nblack or white (*white plays first*)\nw white b black\n";
again1:
cin>>cho;
if(cho=='w'){
player='w';
cout<<"you choosed white\n";
} else if(cho=='b'){
player='b';
cout<<"you choosed black\n";
}else{cout<<"please enter W or B!\n";
goto again1;}

}


//public variable for playing



void playing(){
player;
if(player=='w'){
cout<<"\n\n*you're white so your pieces are upper case\nlike P not p so tape from where to where\nfor example from d2 to d4 write d2tod4\nif there an enemy piece\nin your way you won't move\nunless it was in the exact square\nyou go so you will eat it unless that you\nwon't move anywhere if there is piece\of yours in your way except knight\nyou won't move unless you moved it*\n\n\nnow enter where to move and wait\ncomputer to respond\n";
}
else if(player=='b'){
cout<<"\n\n*you're blac so your pieces are lower case\nlike p not P so tape from where to where\nfor example from d2 to d4 write d2tod4\nif there an enemy piece\nin your way you won't move\nunless it was in the exact square\nyou go so you will eat it unless that you\nwon't move anywhere if there is piece\of yours in your way except knight\nyou won't move unless you moved it*\n\n\nnow enter where to move and wait\ncomputer to respond\n";
}


}












int main(){

vector<string> piecesw={"K","Q","R","B","KN","P"};
vector<string> piecesb={"k","q","r","b","kn","p"};
piecesw[1]=8.7;
piecesw[2]=5.15;
piecesw[3]=4.2;
piecesw[4]=4;
piecesw[5]=1.2;

piecesb[1]=8.7;
piecesb[2]=5.15;
piecesb[3]=4.2;
piecesb[4]=4;
piecesb[5]=1.2;

cout<<" here is the board\n";
sleep(0.9);
boardpr();
player1();
playing();




}



/*©toMuhammad Adam 2024*/
