#include<iostream>
using namespace std;

int main(){
  int pop=5,time=0;
  while(pop<=1000){
      time++;
      pop=pop*2;
  }
  cout<<"Total:"<<pop<<endl;
  cout<<"time:"<<time;
}
