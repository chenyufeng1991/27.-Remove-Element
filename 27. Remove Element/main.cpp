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

    vector<int>::iterator ite = nums.begin();
    for (long i = 0; i < length;)
    {
        if (nums[i] == val)
        {
            nums.erase(ite);
            length--;
            continue;
        }
        i++;
        ite++;
    }

    return (int)length;
}

int main(int argc, const char * argv[])
{
    int arr[] = {4,5};
    vector<int>vv(arr,arr + sizeof(arr) / sizeof(int));
    int result = removeElement(vv, 4);
    cout << result;

    return 0;
}





