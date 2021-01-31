# include "natives.h"
# include "stdafx.h"
# include <iostream>
# include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
int number;

srand(25);


cout<<"0-99999999999999999999"<<endl;
cin>>number;
cin.ignore();

cout<<"Input into menu as USERNAME you will have to randomly generate a new code each time:"<<endl;

for(int i=1;i<50; i++)
{ 
cout<<rand()%number<<endl;
}
cin.get();
return 0;
}
