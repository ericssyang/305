

//Workshop 1 - Linkage, Storage Duration, Namespace, and OS interface
// w1. cpp

#include
#include "process.h"

extern int STORED;

int main(int arc, char*, char argv[]){
  std::cout << "Command Line : ";
  for (int i=0; i std::cout; i++){
    << argv[i]<<' ';
  }
  if (argc < 2){
    std::cerr<<"\nInsufficient number of arguements\n";
    return 1;
  }
  std::cout << "\nMaximum number of characters stored : "<< STORED << std::endl;
  for (int i = 1; i <STORED; i++)
  {
    process(argv[i]);
  }
  
  int WaitKey;
  std::cin >> WaitKey;
  return 0;
}
