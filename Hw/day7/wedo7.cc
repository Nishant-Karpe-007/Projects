#include<iostream>
using namespace std;

int main(){
  int total=50,week=1,current_add=total;
  while(total<=400){
      week++;
      current_add=current_add+20;
      total=total+current_add;
  }
  cout<<"Total:"<<total<<endl;
  cout<<"time:"<<week;
}
