/* rand example */
#include <iostream>
#include <fstream>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main ()
{
  std::ofstream myfile, myfile2;
  myfile.open("data.txt");
  myfile2.open("data2.txt");
  int randNumber;

  /* initialize random seed: */
  srand (time(NULL));

  for (int n=0; n<100; n++) {
    /* generate random number between 1 and 10: */
    randNumber = rand() % 10 + 1;
    std::cout<<"n = "<<n<<": Numero aleatorio = "<<randNumber<<std::endl;
    myfile<<n<<" "<<randNumber<<"\n";
    myfile2<<randNumber<<", ";
  }
  myfile.close();
  myfile2.close();
}
