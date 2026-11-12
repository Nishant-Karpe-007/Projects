#include<iostream>
using namespace std;

int main(){
    int row=2,col=3;
  for(int i =1 ; i<=col;i++){
      cout<<i;
      for(int n =1 ; n<row;n++){
          cout<<i*n<<" ";
      }
      cout<<endl;
  }
}
