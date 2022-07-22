#include <stdio.h>

//����������[left,right]
int Binary_search_1(int* nums, int size, int target) 
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//��ͬ��(left+right)/2,��ֹ���,Ҳ��ͬ��left+(right-left)/2������λЧ�ʱȳ�����
		if (nums[middle] > target)//���target��������
		{
			right = middle - 1;//�ı��������Ϊ[left,middle-1]
		}
		else if (nums[middle] < target)//���target��������
		{
			left = middle + 1;//�ı��������Ϊ[middle+1,right]
		}
		else
		{
			return middle;
		}
	}
	//û���ҵ�target
	return -1;
}

//����������[left,right)
int Binary_search_2(int* nums, int size, int target)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//��ͬ��(left+right)/2,��ֹ���,Ҳ��ͬ��left+(right-left)/2������λЧ�ʱȳ�����
		if (nums[middle] > target)//���target��������
		{
			right = middle;//�ı��������Ϊ[left,middle]
		}
		else if (nums[middle] < target)//���target��������
		{
			left = middle + 1;//�ı��������Ϊ[middle+1,right]
		}
		else
		{
			return middle;
		}
	}
	//û���ҵ�target
	return -1;
}

//����������(left,right]
int Binary_search_3(int* nums, int size, int target)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//��ͬ��(left+right)/2,��ֹ���,Ҳ��ͬ��left+(right-left)/2������λЧ�ʱȳ�����
		if (nums[middle] > target)//���target��������
		{
			right = middle + 1;//�ı��������Ϊ[left,middle+1]
		}
		else if (nums[middle] < target)//���target��������
		{
			left = middle;//�ı��������Ϊ[middle,right]
		}
		else
		{
			return middle;
		}
	}
	//û���ҵ�target
	return -1;
}

//����������(left,right)
int Binary_search_4(int* nums, int size, int target)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);//��ͬ��(left+right)/2,��ֹ���,Ҳ��ͬ��left+(right-left)/2������λЧ�ʱȳ�����
		if (nums[middle] > target)//���target��������
		{
			right = middle;//�ı��������Ϊ[left,middle]
		}
		else if (nums[middle] < target)//���target��������
		{
			left = middle;//�ı��������Ϊ[middle,right]
		}
		else
		{
			return middle;
		}
	}
	//û���ҵ�target
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