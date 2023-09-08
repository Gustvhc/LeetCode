/*
1. Two Sum - Easy

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 
Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

//Brute Force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i]+nums[j]==target) return {i,j};
            }
        }
        return {};
    }
};

//HashTable
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashMap;                         //Cria um mapa numérico não ordenado

        for(int i = 0; i < nums.size(); i++){                   //target - nums[i] devolve o complemento de target, ou seja o número necessário se obter para que se encontre a solução
            if(hashMap.count(target-nums[i])){                  //Conta a quantidade de valores com a chave desejada
                return {hashMap[target-nums[i]],i};             //Retorna as duas posições caso encontre
            }
            hashMap[nums[i]]=i;                                 //Insere a posição no vetor utilizando o valor da posição no vetor nums como chave
        }
        return {};                                              //Em caso do vetor não possuir os valores requiridos
    }
};