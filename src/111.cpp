#include <iostream>
using namespace std;
int main(){
    char arr [10][20];
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            if ( i==0||i==9){
                arr[i][j] = '#';
            }
            else if(j==0||j==19){
                arr[i][j]='#';
            } else if (j==9){
                arr[i][j]=':';
            } else if ((i ==3 && j==4)|| (i==4&& j==4)||(i==5&& j==4 )||(i==3 && j==16)||(i==4&& j==16)){
                arr[i][j]='|';
            } else {
                arr[i][j]= ' ';
            }
        }
     
    }
    
  //  int arr[]={1,2,3,4,5,6,7,8,9,10};
   for (int i=9;i < 10;i++){
     for (int j = 0;j<20;j++){
       cout << arr [i][j];
    }
    cout << endl;
   }

    
    return 0;
    }
    
