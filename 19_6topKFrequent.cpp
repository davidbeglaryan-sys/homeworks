#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


std::vector<int> topKFrequent(std::vector<int>& nums, int k) {

	std::map<int, int> mymap;

	for(int x: nums) {
		mymap[x]++;
	}

	std::vector<std::pair<int, int>> vec;

	for(auto& x: mymap) {
		vec.push_back({x.first, x.second});
	}

	std::sort(vec.begin(), vec.end(), [](const std::pair<int,int>& a, const std::pair<int,int>& b) {
		return a.second > b.second;
	});


	std::vector<int> result;

	for(int i=0; i<k; i++) {
		result.push_back(vec[i].first);
	}

	return result;


}


int main() {
	std::vector<int> nums = {1, 1, 1, 2, 2, 3};
	std::vector<int> result = topKFrequent(nums, 2);

	for(int x: result) {
		std::cout << x << " ";
	}
}