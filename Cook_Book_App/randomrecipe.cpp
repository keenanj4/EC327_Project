#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main(){
	
	cout << "Enter 's' to select random recipe:";
	char start;
	cin >> start;
	if(start == 's'){
		srand(time(NULL));
		string line;
		int k;
		
		char filename[16];
		sprintf(filename,"recipe%i.txt",rand()%4);
		// cout<<filename<<endl;

		ifstream myfile(filename);
		getline(myfile,line);
		cout << line << endl;

	}

	return 0;
}
