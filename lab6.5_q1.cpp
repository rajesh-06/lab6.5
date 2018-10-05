/*(Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer.*/

//Include the library
#include <iostream>
using namespace std;

//Main function
int main(){
    
    float i = 1, j = 3, k = 0.5;
    cout << "The following combination of fruits can be brought:" <<endl;
    for (int apples = 0; apples<=100; apples++)
    {
        for (int mangoes = 0; mangoes <=100; mangoes++)
        {
            for (int bananas = 0; bananas <= 100; bananas++)
            {
                float total = 0;
                total = (apples*i)+(mangoes*j)+(bananas*k);
                if (total == 100 && apples+mangoes+bananas == 100){
		//printing the results

                cout << apples << " apples, " << mangoes << " mangoes and " << bananas << " bananas. \n";
                }

            }
        }
    }
//Termineting the program
return 0;
}
