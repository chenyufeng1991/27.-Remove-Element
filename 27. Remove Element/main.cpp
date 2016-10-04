//
//  main.cpp
//  27. Remove Element
//
//  Created by chenyufeng on 10/4/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val)
{
    sort(nums.begin(), nums.end());
    long length = nums.size();

    long startIndex = 0, endIndex = nums.size() - 1;
    bool isStartFind = false,isEndFind = false;
    for (long i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            startIndex = i;
            isStartFind = true;
            break;
        }
    }
    for (long i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] == val)
        {
            endIndex = i;
            isEndFind = true;
            break;
        }
    }

    if (isStartFind && isEndFind)
    {
        return (int)(length - (endIndex - startIndex + 1));
    }
    else
    {
        return (int)length;
    }
}

int main(int argc, const char * argv[])
{
    int arr[] = {4,5};
    vector<int>vv(arr,arr + sizeof(arr) / sizeof(int));
    int result = removeElement(vv, 4);
    cout << result;

    return 0;
}





