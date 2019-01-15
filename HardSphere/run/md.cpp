#include<iostream>


#include "../sim/initialize.hpp"
#include "../sim/atom.hpp"
#include "../maths/Vector3.hpp"
using namespace std;


int main()
{
  int number_of_atoms=100;
  initialize system(number_of_atoms);
  system.Initial();
    cout<<"address of system "<<(system.systemAtoms)<<endl;

  for(int i=1;i<=number_of_atoms;i++)
  {
    cout<<"Position of "<< i <<"atom : " << (system.systemAtoms[i]).getVelocity().x<< endl;
  }


}
