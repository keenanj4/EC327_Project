#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string> //needed this
#include <time.h> //and this

using namespace std;



int main(){
	ifstream myfile1("num_files.txt"); //IMPORTANT: need to make a file that has the initial number of recipe files.
	float out;
	myfile1 >> out;
	// cout << out << endl;
	int number_of_files = out;
	
	// cout << number_of_files;
	cout << "Enter 's' to select random recipe or 'n' to enter new recipe:";
	char start;
	cin >> start;


	// int number_of_files = 4;//this will not stay at 4
		//find a way to count the files available
		//or just have it keep guessing until it gets a hit
	if(start == 's'){
		srand(time(NULL));
		string line;
		
		//find a way to count the files available
		//or just have it keep guessing until it gets a hit
		char filename[16];
		sprintf(filename,"recipe%i",rand()%number_of_files + 1);
		// cout<<filename<<endl;

		ifstream myfile(filename);
		while (getline(myfile,line)){
			cout << line << '\n';
		}

		myfile.close();

	}

	else if (start == 'n'){//for a new recipe
		
		ofstream myfile1("num_files.txt");
		myfile1 << (number_of_files+1);


		char filename2[16];
		sprintf(filename2,"recipe%i",number_of_files+1);
		
		ofstream myfile(filename2);

		string line;
		// string recipe = " ";
		cout << "Write your Recipe here." << endl;
		cout << "Type 'END' and hit Enter Key when done." << endl;
		// cin >> recipe;
		// while(cin>>recipe){

		// 	myfile << recipe << " ";
			
		// 	if(cin.get() == '\n'){
		// 		myfile << '\n';
		// 	}
			
		// 	if(recipe == "END"){
		// 		break;
		// 	}
		// }
		cin.ignore();
		while(getline(cin,line)){
			myfile << line;
			if(line == "END"){
				break;
			}
			myfile << '\n';
		}
			
		myfile.close();
		myfile1.close();

	}
	
	myfile1.close();

	return 0;
}

