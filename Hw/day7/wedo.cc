#include<iostream>
using namespace std;

int main(){
  int input=0,total=0;
  cin>>input;
  for (int i =0; i<=input;i++){
      cout<<i*4<<endl;
      total=total+(i*4);
  }
  cout<<"Total:"<<total;
}
