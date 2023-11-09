#include<iostream>
#include<stdlib.h>
#include <vector>
using namespace std;
long long maxPairProduct(const vector<int>& numbers){
	long long result=0;
	int n=numbers.size();
	long long max=numbers[0];
	long long smax=-1;
	for(int i=0;i<n;i++){
		if(max<numbers[i]){
			smax=max;
			max=numbers[i];
		}
		else if(max>numbers[i] &&smax<numbers[i]){
			smax=numbers[i];
		}
	}
	result=max*smax;
	return result;
}

long long maxPairProductfast(const vector<int> &numbers){
	int n=numbers.size();
	int max_idx1=-1;
	for(int i=0;i<n;++i){
		if((max_idx1==-1)||(numbers[i]>numbers[max_idx1])){
			max_idx1=i;
		}
	}
	int max_idx2=-1;
	for(int i=0;i<n;++i){
		if((numbers[i]!=numbers[max_idx1])&&(max_idx2==-1)||(numbers[i]>numbers[max_idx2])){
			max_idx2=i;
		}
	}
	return ((long long)(numbers[max_idx1])*(numbers[max_idx2]));
}

int main(){
while(true){
	int n=rand() % 10+2;
	cout<<n<<"\n";
	vector<int> a;
	for(int i=0;i<n;++i){
		a.push_back(rand() %100000);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<"\n";
	long long res1=maxPairProduct(a);
	long long res2=maxPairProductfast(a);
	if(res1!=res2){
		cout<<"Wrong answer : "<<res1<<" "<<res2<<"\n";
		break;
			}
	else{
		cout<<"OK\n";
	}		

}
int n;
cin>>n;
vector<int>numbers(n);
for(int i=0;i<n;i++){
	cin>>numbers[i];
}
long long result=maxPairProduct(numbers);
cout<<result<<"\n";
return 0;



}
