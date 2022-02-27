#include<bits/stdc++.h>

using namespace std;


//leetcode 26:- remove duplicate element
int removeDuplicates(vector<int> &nums)
{

    if (nums.size() == 0)
        return 0;
    int X = 0;
    for (int Y = 1; Y < nums.size(); Y++)
    {
        if (nums[X] != nums[Y])
        {
            X++;
            nums[X] = nums[Y];
        }
    }
    return (X + 1);
}
// ransom problem leetcode
bool canConstruct(string ransomNote, string magazine) {
	for(int i=0;i<ransomNote.size();i++){
		//Find the index of ransomNote[i] in magazine 
		//using find function and store in ind
		int ind = magazine.find(ransomNote[i]);
		//If ransomNote[i] exists in magazine find will
		//return the index of the first occurence otherwise -1
		if(ind < 0) return false;
		//If ransomNote[i] is found in magazine delete 
		//ransomNote[i] from magazine so it's not found again with same index
		else magazine.erase(magazine.begin() + ind);
    }
	//If the loop is not broken in between it means 
	//every character in ransomNote is present in magazine
    return true;
}
// remove element accepted code by own leetcode 17
int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int cont = 0;
    for(int i =0;i<n;i++){
        if(nums[i]==val){
            cont++;
        nums[i]=INT_MAX;
        }
    }
        sort(nums.begin(),nums.end());
        return (n-cont);
}

int main(){
    

   return 0;
 } 