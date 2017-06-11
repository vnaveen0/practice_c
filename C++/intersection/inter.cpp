#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
	 Write intersection function such that it returns a vector that contains
	 all of the numbers that appear in both arrays.
Example:
Inputs [2,3,6,1], [2,1,9]
Output [2,1]


*/

std::vector<int> intersection(std::vector<int> v1, std::vector<int> v2)
{
	std::vector<int> result;

	sort(v1.begin(), v1.end()); //nlogn
	sort(v2.begin(), v2.end()); //nlogn

	int it1=0;
	int it2 = 0;

	//O(n)
	while( it1 < v1.size() || it2 < v2.size() ) {

		if(v1[it1] == v2[it2]) {
			result.push_back(v1[it1]);
			it1++;
			it2++;
		}
		else if ( v1[it1] < v2[it2]) {
			it1++;
		}
		else {
			it2++;
		}
	}


	return result;
}


int main() {

	//EXAMPLE
	std::vector<int> v1 = {2,3,6,1};
	std::vector<int> v2 = {2,1,9};

	std::vector<int> v3 = intersection(v1,v2);

	for (int i : v3)
	{
		cout << i << " ";
	}
	cout << endl;


	return 0;
}


/* 
	 Your previous C content is preserved below:

	 Module div_by_5 (

	 input [7:0] din,din_valid

	 output in_ready

	 output [7:0] dout,
	 output [7:0] rem,
	 input clk);

	 num = RegInit(5);
	 out_reg = Reg(0);
	 Out_valid = RegInt(false);
	 out_valid = RegInit(false);


in_ready := ~out_valid

when(din_valid && in_ready ) {
out_reg:= din/num
out_valid := true
}

//--------------------------------------------------------


input din
output quo
output reg
output out_valid


quo_reg = RegInit(0)
rem_reg = RegInit(0)
num = RegInit(5)
start = RegInit(false)



when(din_valid && in_ready ) {
din_reg := din
din_valid := false
start := true
out_valid := false
}



when(start) {
if(rem_reg > num) {
din_reg := din_reg - num;
quo := quo +1

}
else {
start := false
out_valid := true
}
}

when(!start) {
out_valid := true
}
.otherwise ( out_valid := false)

rem := rem_reg
quo := quo_reg

*/
