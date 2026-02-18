#include <bits/stdc++.h>

std::vector<std::vector<int>> result;
void backtrack(std::vector<int> &nums, int index, std::vector<int> &current, int k){
if(current.size() == k){
 result.push_back(current);
 return;
 }
 for(int i = index; i < nums.size(); i++){
 current.push_back(nums[i]);
 backtrack(nums, i + 1, current, k);
 current.pop_back();
 }
}
std::vector<std::vector<int>> subsets(std::vector<int> &nums, int k){
result.clear();
std::vector<int> current;
backtrack(nums, 0, current, k);

return result;
}

int main() {
std::vector<int> nums;
int size;
int value;
int k;
std::cout << "Enter size of the subset: ";
std::cin >> k;
 std::cout << "Enter size of the set: ";
 std::cin >> size;
for(int i = 1; i <= size; i++){
std::cout << "Enter element "<<i<<": ";
std::cin >> value;
nums.push_back(value);
}
std::vector<std::vector<int>> printer = subsets(nums, k);
for(auto element : printer){
std::cout << "[";
for(int i = 0; i < element.size(); i++){
std::cout << element[i];
if(i != element.size() - 1){
std::cout << ",";
}}
std::cout << "] ";
}}