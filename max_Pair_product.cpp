#include<iostream>
#include<vector>

using namespace std;
int maxPairPRoduct(const vector<int> & numbers){
	
	int rows=numbers.size();
	long long max=numbers[0];
	long long smax=-1;
	for(int i=0;i<rows;i++){
		if(max<numbers[i]){
			smax=max;
			max=numbers[i];
		}
		else if(max>numbers[i] &&smax<numbers[i]){
			smax=numbers[i];
		}
	}
	cout<<smax*max;
	return 0;
}


int main(){
	int rows;
	cin>>rows;
	
	vector <int> numbers(rows);
	
	for(int i=0;i<rows;i++){
		cin>>numbers[i];
	}
	maxPairPRoduct(numbers);

	
return 0;
}
