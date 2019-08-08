#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;


int main()
{

 int nos, counter=0;
 double paid[1000], total=0, deficits[1000], surplus[1000];

 while(1)
 {
 cin >> nos;
 total = 0;
 if (nos == 0)
 {
 for (int i=0; i<counter; i++)
 {
 if (deficits[i] < surplus[i]) deficits[i] = surplus[i];

 cout << '$' << setprecision(2) << fixed << deficits[i] << endl;
 }

 return 0;
 }

 for (int i=0; i<nos; i++) {cin >> paid[i]; total+= paid[i];}

 total /= nos;

 deficits[counter] = 0;
 surplus[counter] = 0;
 for (int i=0; i<nos; i++)
 if (paid[i] < total) deficits[counter] += (floor((total - paid[i])*100))/100;
 else if (paid[i] > total) surplus[counter] += (floor((-total + paid[i])*100))/100;

 counter++;
 }

 return 0;
}
