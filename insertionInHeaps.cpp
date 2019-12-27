//MAX HEAP

#include <iostream>
#include <vector>
using namespace std;

void upheapify(vector <int> &heap, int idx){
	if(idx ==0){
		return;
	}
	int parentIdx=((idx-1)/2);
	if(heap[parentIdx] < heap[idx]){
		//SWAP
		int temp = heap[parentIdx];
		heap[parentIdx]=heap[idx];
		heap[idx]=temp;
		upheapify(heap, parentIdx);
	}else{
		return;
	}
}

void insert(vector <int> &heap, int key){
	heap.push_back(key);
	upheapify(heap, heap.size()-1);	
}

void display(vector <int> &heap){
	for(int i=0; i<heap.size(); i++){
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[]){
	vector <int> heap;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x=0;
		cin>>x;
		insert(heap, x);
	}
	display(heap);
	return 0;
}
