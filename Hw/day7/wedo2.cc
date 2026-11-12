#include<iostream>
using namespace std;

int main(){
  int even_count=0,odd_sum=0,input;
  cin>>input;
  for(int i = 1;i<=input;i++){
      if(i%2==0){
          even_count++;
      }
      else{
          odd_sum=odd_sum+(i*i);
      }
  }
  cout<<"Odd square sum = "<<odd_sum<<endl;
  cout<<"Even Count = "<<even_count<<endl;
}
