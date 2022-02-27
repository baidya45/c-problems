#include <bits/stdc++.h>
#include <string.h>

#include <math.h>

using namespace std;

bool isprime(int a)
{
    int sq = sqrt(a);
    for (int i = 2; i <= sq; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }

    return true;
}

void amstrong(int n)
{
    int q = n;
    int res = 0, d;
    while (n > 0)
    {
        d = n % 10;
        res = res + pow(d, 3);
        n = n / 10;
    }
    cout << q << " " << res << endl;
    if (res == q)
    {
        cout << "yes the num is amstrong";
    }
    else
    {
        cout << "the num is not amstrong";
    }
}

void reverse(int n)
{
    int rev = 0, d;
    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    cout << rev << endl;
}

bool isPalindrome(int n)
{
    string str = to_string(n);
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        cout << str[i] << endl;
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

// leetcode 26:-
int removeDuplicates(vector<int> &nums) // not optimized,optimized in the optimized file
{
    int i, j, l = 0, counter = 0, k;

    int len = nums.size();
    for (i = 0; i < len; i = j)
    {
        for (j = i + 1; j <= len; j++)
        {
            nums[l] = nums[i];
            if (nums[j] == nums[i])
            {
                counter++;
            }
            else
            {
                l++;
                break;
            }
        }
    }

    k = len - counter;
    return k;
}
// remove element
int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == val)
        {
            cont++;
            nums[i] = INT_MAX;
        }
    }
    sort(nums.begin(), nums.end());
    return (n - cont);
}
// search insert  position
// int searchInsert(vector<int> &nums, int target)
// {
// }

int rightSetBit(int num)
{
    int counter = 0;
    while ((1 & num )!= 1)
    {

        counter++;
        num = num >> 1;
    }
    return counter+1;
}

// find two non  repeating element in the array where other elemnets appear twice

 vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        int n = nums.size();
        vector<int> res;
    for (int i = 0; i < n; i++)
    {
        x = x ^ nums[i];
    }
    // cout<<x;
    int pos = rightSetBit(x);
    // cout<<pos;
    int flag = 1<<(pos-1);
    int c=x,b=x;
    for(int i=0;i<n;i++){
        if((nums[i]&flag)==pow(2,pos-1)){
            c=(c^nums[i]);
        }
        else{
            b=(b^nums[i]);
        }
    }

    res.push_back(c);
    res.push_back(b);

        return res;
    }

int searchInsert(vector<int>& nums, int target) {

    int n = nums.size();
    for(int i =0;i<n;i++){
        if(nums[i]>=target){

        }
    }

}

int binarySearch(int arr[], int target)
{

    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0])-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == arr[mid])
            return mid;
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {1, 3, 4, 7, 9, 10, 12};
    int res = binarySearch(arr, 5);
    int size = sizeof(arr)/sizeof(arr[0])-1;
    cout << size<<endl;
    cout << res;
    return 0;
}