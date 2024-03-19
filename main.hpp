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
        //  int result = 0;
         static int Random = 0;
         //Do not include s(rand(0)), unless you want to use the same number every time
         Random = rand()%(99 + 1);
         cout << "Random number #1: " << Random << endl;
         return Random;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         ***************************************************/
         int result = 0;
         float Mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
         cout << "Mean: " << Mean << endl;
         Mean = round(Mean);
         cout << "Rounded Mean: " << Mean << endl;
         while(result != Mean){
                result+=1;
                if (result = Mean){
                        cout << "Result: " << result << endl;
                        break;
                }
                else{
                        result += 0;
                }
        }
        return result;
}