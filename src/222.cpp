#include <iostream>
using namespace std;
int main(){
    int arr[3][2][2]={{    {1,2},
                           {34,4}
                         },
                         {  {32,43},
                            {54,21} 
                        },
                        {   {23,76},
                            {87,45}
                        }
                        };
            cout << arr[0][0][1] <<endl;  
           for (int i= 0;i < 3;i++){
           

                for(int j=1;j<2;j++){
                    for(int k = 1;k<2;k++){
                        cout <<  arr[i][j][k]<< " ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
}