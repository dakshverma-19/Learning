#include<iostream>
using namespace std;
int main(){

  int reversedigit=0;
  int lastdigit;
  int n=0007;
while( n > 0){

lastdigit = n%10;



n=n/10;
reversedigit=(reversedigit*10)+ lastdigit;

}

cout<<reversedigit<<endl;
}
    