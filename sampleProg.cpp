#include <iostream>
using namespace std;

int main(){
	
	int ages[] = {12,5,18,21,19}, sum = 0;
	
	cout << "\nThe content of the array: ";
	for(int i = 0; i< 5; i++){
		cout << ages[i] << " ";
		sum = sum + ages[i];
	}
	
	cout << "\n\nThe sum of the array: " << sum;
	cout << "\n\nThe average of the array: " << sum / 5 << endl;
	
	return 0;
	
}
