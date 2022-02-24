#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<bool>a(10,false);
	a.push_back(11);
	a.push_back(0);
	for (vector<bool>::iterator iter = a.begin();iter != a.end(); ++iter)
 
		{cout<<*iter<<endl;} // set el


	return 0;
}
