#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
	if(nums.size() == 0) return false;
	set<int> setValues;
	for ( int i = 0; i < nums.size(); i++) {
		if(setValues.find(nums[i]) == setValues.end()) {
			setValues.insert(nums[i]);
		} else {
			return true;
		}
	}

	return false;
}


int main(int argc, char const *argv[])
{
	
	return 0;
}