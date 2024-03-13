//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        /***************************************************
         * Code your program here
         ***************************************************/
         int result;
         srand(time(0));
         int rdnum1 = rand()%(99 + 1);
         cout << "Random number #1: " << rdnum1 << endl;
         int rdnum2 = rand()%(99 + 1);
         cout << "Random number #2: " << rdnum2 << endl;
         int rdnum3 = rand()%(99 + 1);
         cout << "Random number #3: " << rdnum3 << endl;
        //  int result = getClosestMed(rdnum1, rdnum2, rdnum3);
        float Mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
        cout << "Mean: " << Mean << endl;
        Mean = round(Mean);
        cout << "Rounded Mean: " << Mean << endl;
        int j = 0;
        while(j != Mean){
                if (j = Mean){
                        j = result;
                        break;
                }
                else{
                        j += 1;
                }
        }
        //  for(int i = 0; i <= Mean; i++){
        //         if(i = Mean && i != 0){
        //                 i = result;
        //                 break;
        //         }
        // }
         cout << "Result: " << result << endl;
         return result;
}
// int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
// {
//         /***************************************************
//          * Code your program here
//          ***************************************************/
//          int result;
//          float Mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
//          for(float i = 0; i <= Mean; i++){
//                 if(i = Mean){
//                         i = result;
//                         break;
//                 }
//         }
//          return result;
// }