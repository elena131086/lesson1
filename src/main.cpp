#include <iostream>
#define SIZE 3
using namespace std;
int main(){
    
     const string play_ [] = {"_play_","settings","exit"};
    const string settings_ [] = {"play","_settings_","exit"};
    const string exit_ [] = {"play","settings","_exit_"};
     int current = 0;
         while(true){
        if (current == 0) 
        {
           for (int i = 0;i< size;i++)
            cout << play_ <<[i] endl;
          } else if (current == 1){
            for ( int i = 0; i < size; i++)
            
            cout << settings_ <<[i] endl;
            }  else if (current == 2){
           for ( int i=0;i<size;i++)
            cout << exit_ <<[i] endl;
            }  
            
                    
                }
             
       

    
    
   
   
    return 0;
}