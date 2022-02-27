#include <bits/stdc++.h>

using namespace std;

int rightSetBit(int num)
{
    int counter = 0;
    while ((1 & num) != 1)
    {

        counter++;
        num = num >> 1;
    }
    return counter + 1;
}
vector<int> singleNumber(vector<int> &nums)
{
    int x = 0;
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        x = x ^ nums[i];
    }
    int pos = rightSetBit(x);

    int flag = 1 << (pos - 1);
    int c = x, b = x;
    for (int i = 0; i < n; i++)
    {
        if ((nums[i] & flag) == pow(2, pos - 1))
        {
            c = (c ^ nums[i]);
        }
        else
        {
            b = (b ^ nums[i]);
        }
    }

    res.push_back(c);
    res.push_back(b);

    return res;
}

// search insert position ques 35

int searchInsert(vector<int> &nums, int target)
{
    int h, l, m;
    h = nums.size() - 1;
    l = 0;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (nums[m] == target)
        {
            return m;
        }

        if (nums[m] < target)
        {

            l = m + 1;
        }
        else
        {

            h = m - 1;
        }
    }

    return l;
}

// climbstairs leetcode brute force
int fact(int n)
{
    while (n != 0)
    {
        return (n * fact(n - 1));
    }
    return 1;
}
int ClimbStairs(int n)
{
    int i = n, j, sum = 0;
    for (j = 0; j <= (n / 2); j++)
    {
        sum += (fact(i + j) / (fact(i) * fact(j)));
        i = i - 2;
    }

    return sum;
}
//optimized and fast solution or simple fibonacci
int climbStairs(int n)
{
    if (n <= 2)
    {
        return n;
    }
    int p1 = 1, p2 = 2, res;
    for (int i = 3; i <= n; i++)
    {
        res = p1 + p2;
        p1 = p2;
        p2 = res;
    }
    return res;
}

//plus one 

 vector<int> plusOne(vector<int>& digits) {
        bool carry = false; 
        int i = digits.size()-1;
        do{  //use do while to run atleast onces
            digits[i]++;
            if(digits[i]>9){
                digits[i]= 0;
                carry = true;
            }else{
                carry = false;
            }
            i--;
        }while(carry && i>=0);
        
        if(carry){ //if first digit was 9 add 1 at the beginning
            digits.insert(digits.begin(),1);
        }
        return digits;
    }

    //sqrt of x

 int mySqrt(int x) {
       long long int i=1;
        while(i*i<=x){
            i++;
        }

        return i-1;
}

//longest substring without repeating character

//kaden's algo

int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;
        int n = nums.size();
    for(int i = 0 ;i<n;i++){
        currSum = currSum + nums[i];
        if(currSum>maxSum){
            maxSum=currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }

    return maxSum;
        
    }

int main()
{
     vector<int> arr = {1,-2,4};
   int res = maxSubArray(arr);

   cout<<res;
   return 0;
}