#include <iostream>
using namespace std;

int main() {

	// DATA TRAVERSING
/*	
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
*/	
	// DATA EXTRACTION
	
	int n = 1234;
	
	while(n >= 10) {
		n /= 10;
	}
	cout << n;
	
	int size;
	cout << "Enter the Size of the array: ";
	cin >> size;
	
	int arr[size] = {};
	
	for(int i = 0; i < size; i++) {
		cout << "Enter Number" << "[" << i << "]: ";
		cin >> arr[i];
	}

	int arr[100];
	int n;
	int count = 0;
	
	do {
	    cout << "Enter number: ";
	    cin >> n;
	    	if(n != 0) {
	    		arr[count++] = n;
			}
	} while (n != 0);
	
	cout << "Total Numbers: " << count << endl;
	
	for(int i = 0; i < count; i++) {
		string sign;
		string oddeven;
		
		if(arr[i] % 2 == 0) {
			oddeven = "Even";
		}
		else {
			oddeven = "odd";
		}
		
		if(arr[i] < 0) {
			sign = "Negative";
		}
		else {
			sign = "Positive";
		}
		cout << arr[i] << " is " << oddeven << " and " << sign << endl;;
	}
	
	// HARD
	
		int size;

	
	cout << "Enter The Size of Array: ";
	cin >> size;
	
	int mostfreq;
	int appear = 0;
	int arr[size] = {};
	
	for(int i = 0; i < size; i++) {
		cout << "Enter Number: " << "[" << i << "]: ";
		cin >> arr[i];
	}
	

	
	for(int i = 0; i < size; i++) {
		
		int count = 0;
		
		for(int j = 0; j < size; j++) {	
				
			if(arr[j] == arr[i]) {
				count++;
			}
			
		}
		if(count > appear) {
			appear = count;
			mostfreq = arr[i];
		}
				
	}	
	
	bool checker = false;
	
	for(int i = 0; i < size; i++) {
		
		int count = 0;
		
		for(int j = 0; j < size; j++) {					
			if(arr[j] == arr[i]) {
				count++;
			}			
		}
		if(count == appear && arr[i] != mostfreq) {
			checker = true;
			break;
		}	
	}
	
	if(checker) {
		cout << "No Unique Shit";
	}
	else {
		cout << "Most Number Entered: " << mostfreq << endl;
		cout << "How many times did it appear: " << appear;
	}

	return 0;
	
	// TRAVERSING SHIT
	
	int n;
	int arr[100] = {};	
	int count = 0;
	string oddeven;
	
	do {
		cout << "Enter Number: ";
		cin >> n;
		if (n > 0) {
			arr[count++] = n;
		}
	} while(n > 0);
	
	cout << "Total Numbers Entered: " << count << endl;
	
	for (int i = 0; i < count; i++) {
		int num = arr[i];
		
		while(num >= 10) {
			num /= 10;

		}	
		if(num % 2 == 0) {
				oddeven = "even";
		}
		else {
				oddeven = "odd";
		}
		cout << "Num " << i + 1 << " : " << num << " " <<  oddeven << endl;
	}	
	

}
