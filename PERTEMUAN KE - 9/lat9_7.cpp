#include<iostream>
#include<string.h>
using namespace std;
 
int main(){
   char destination [25];    
 char  blank [10]= {" "}, c [10]= {"C++"}, Borland [10] = {"Borland"};
    strcpy (destination, Borland);    
 strcat (destination, blank);    
 strcat (destination, c);
    cout<<destination;  
 return 0;
}