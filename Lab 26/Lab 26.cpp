//DocUmentation Section

/*
File Name : Lab 26
Author : Hamza Alsayed Almradny
Version : V.1
Purpose : Display the pattern like right angle triangle using an asterisk.
Date : 24/7/2025
*/






#include<iostream>
using namespace std;

int main() {

	int num, i=1, j=1;

	cout << "Enter a num: ";
	cin >> num;

	while (i<=num) {
		j = 1;

		while (j <= i) {

			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}




	return 0;
}


//for (i = 1;i <= num;i++) {


	//for (j = 1;j <= i;j++) {
		//cout << "*";


	//}

	//cout << endl;
//}
