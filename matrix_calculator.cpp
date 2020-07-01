#include<iostream> //Library Import
using namespace std;

int main() {
	int r, c, a[100][100], b[100][100], ope[100][100], i, j,op;

	// Defining rows and Column
	cout << "Enter Number of Rows(Range 0 to 100): " << endl; //Define Row
	cin >> r;
	cout << "Enter Number of Columns(Range 0 to 100): " << endl; //Define Column
	cin >> c;
    
    cout<<"-----------------------------------------Enter for First Matrix-------------------------------------------"<<endl;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << "Enter Elements of 1st matrix: ";
			cin >> a[i][j];
		}
	}

    cout<<"-----------------------------------------Enter for Second Matrix-------------------------------------------"<<endl;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << "Enter Elements of 2nd matrix: ";
			cin >> b[i][j];
		}
	}
	cout<<"-----------------------------------------Choose your Calculation Method-------------------------------------------"<<endl;
	cout<<"What would you like to do about the Matrix"<<endl;
	cout<<"Enter 1 for Addition"<<endl;
	cout<<"Enter 2 for Substraction"<<endl;
	cout<<"Enter 3 for Multiplication"<<endl;
	cout<<"Enter 4 for Division"<<endl;
	cin>>op;
	
	
	cout<<"-----------------------------------------Results Below-------------------------------------------"<<endl;
	if(op==1){
	    //Sum of the Matix
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			ope[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "Sum of Matrix is:" << endl;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << ope[i][j] << " ";
			if (j == c - 1)
				cout << endl;
		}
	}
	}
	
	else if(op==2){
	    //Substracting the Matrix
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			ope[i][j] = a[i][j] - b[i][j];
		}
	}
	cout << "Subtractions of matrix is:" << endl;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << ope[i][j] << " ";
			if (j == c - 1)
				cout << endl;
		}
	}
	}
	
	else if(op==3){
	    //Multiplication of the Matrix
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			ope[i][j] = a[i][j] * b[i][j];
		}
	}
	cout << "Multiplication of matrix is:" << endl;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << ope[i][j] << " ";
			if (j == c - 1)
				cout << endl;
		}
	}
	}
	
	else if(op==4){
	    //Division of the Matrix
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			ope[i][j] = a[i][j] / b[i][j];
		}
	}
	cout << "Division of matrix is:" << endl;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << ope[i][j] << " ";
			if (j == c - 1)
				cout << endl;
		}
	}
	}
	else{
	    //For invalid Input
	    cout<<"Input is Incorrect, Please enter the Valid input next time"<<endl;
	}
		
	
}