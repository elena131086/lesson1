#include <iostream>
#define size 3
using namespace std;
void print(const string  arr[size]);
int main(){
    
    const string play_ [] = {"_play_","settings","exit"};
    const string settings_ [] = {"play","_settings_","exit"};
    const string exit_ [] = {"play","settings","_exit_"};
    int current = 0;
    char key;
    while(true){
      if (current == 0){ 
        print (play_);
      } else if (current ==1){
         print (settings_); 
        } else if (current == 2){
            print (exit_);
        }  
    cout << "Enter key: ";
    cin >> key;    
    if (key =='w'){
        if (current == 0){
            current =2;
        }
        else {
          current -= 1;
        }
        
    } else if (key =='s'){
        if (current == 2){
            current = 0;
        }
        else {
          current +=1;     
        }
    } 
  }

    return 0;
                    
}
void print (const string arr[size]){
  for (int i = 0; i<size;i++){
    cout <<arr[i] << endl;
  }
}
             
       

    
    
   
   
    
