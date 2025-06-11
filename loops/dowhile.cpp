#include<iostream>
#include<string>
using namespace std;

int main() {
     int password;
     string userNume;

     int i;
     i = 1;
     do
     {
        cout <<"Enter a username: ";
        cin >>userNume;
        cout <<"Enter a password: ";
        cin >>password;

        if (userNume=="goutam")
        {
         
          if (password==123){
               cout <<"login successfull"<<endl;
          }
          else{
               cout <<"incrrect password";
          }
        }else{
          cout <<"incrrect username";
        }
        i++;

        
     } while (1);
     
}
