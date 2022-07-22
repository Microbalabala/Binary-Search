#include <stdio.h>

//查找区间在[left,right]
int Binary_search_1(int* nums, int size, int target) 
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//等同于(left+right)/2,防止溢出,也等同于left+(right-left)/2，但移位效率比除法高
		if (nums[middle] > target)//如果target在左区间
		{
			right = middle - 1;//改变查找区间为[left,middle-1]
		}
		else if (nums[middle] < target)//如果target在右区间
		{
			left = middle + 1;//改变查找区间为[middle+1,right]
		}
		else
		{
			return middle;
		}
	}
	//没有找到target
	return -1;
}

//查找区间在[left,right)
int Binary_search_2(int* nums, int size, int target)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//等同于(left+right)/2,防止溢出,也等同于left+(right-left)/2，但移位效率比除法高
		if (nums[middle] > target)//如果target在左区间
		{
			right = middle;//改变查找区间为[left,middle]
		}
		else if (nums[middle] < target)//如果target在右区间
		{
			left = middle + 1;//改变查找区间为[middle+1,right]
		}
		else
		{
			return middle;
		}
	}
	//没有找到target
	return -1;
}

//查找区间在(left,right]
int Binary_search_3(int* nums, int size, int target)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//等同于(left+right)/2,防止溢出,也等同于left+(right-left)/2，但移位效率比除法高
		if (nums[middle] > target)//如果target在左区间
		{
			right = middle + 1;//改变查找区间为[left,middle+1]
		}
		else if (nums[middle] < target)//如果target在右区间
		{
			left = middle;//改变查找区间为[middle,right]
		}
		else
		{
			return middle;
		}
	}
	//没有找到target
	return -1;
}

//查找区间在(left,right)
int Binary_search_4(int* nums, int size, int target)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//等同于(left+right)/2,防止溢出,也等同于left+(right-left)/2，但移位效率比除法高
		if (nums[middle] > target)//如果target在左区间
		{
			right = middle;//改变查找区间为[left,middle]
		}
		else if (nums[middle] < target)//如果target在右区间
		{
			left = middle;//改变查找区间为[middle,right]
		}
		else
		{
			return middle;
		}
	}
	//没有找到target
	return -1;
}

int main()
{
	int nums[] = { -1,0,3,9,11,13,22,27,33,57,66,77 };
	int len = sizeof(nums) / sizeof(int);
	int ret1 = Binary_search_1(nums, len, 33);
	int ret2 = Binary_search_2(nums, len, 33);
	int ret3 = Binary_search_1(nums, len, 33);
	int ret4 = Binary_search_1(nums, len, 33);
	printf("%d %d %d %d\n", ret1, ret2, ret3, ret4);
	return 0;
}