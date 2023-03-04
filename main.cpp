#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int indis1,indis2;

      for(int indis1 = 0; indis1< nums.size();indis1++){
          for(int indis2 = 1;indis2<=nums.size();indis2++){

             if(nums[indis1]+nums[indis2]==target){

            return {indis1 , indis2};
             }

          }
      }
      return{};
    }

};
