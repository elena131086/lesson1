#include <iostream>
using namespace std;
int main(){
    int arr[3][5]={{1,2,3,4,5},
                    {10,20,30,40,50},
                     {100,200,300,400,500}}; 
            cout << arr[0][0] <<endl;  
           for (int i= 2;i >= 0;i--){
            for(int j=4;j>=0;j--){
                cout << char( arr[i][j] )<< " ";
            }
            cout << endl;
            }
}