/*©toMuhammad Adam 2024*/
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

using namespace std;

//public variables 
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
}


}
}

int main(){

vector<string> pieces={"k","q","r","b","kn","p"};
pieces[1]=8.7;
pieces[2]=5.15;
pieces[3]=4.2;
pieces[4]=4;
pieces[5]=1.2;
cout<<"here is the board\n";
sleep(1.2);
boardpr();

}
/*©toMuhammad Adam 2024*/
