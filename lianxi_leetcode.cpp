////第十七题
////算法：
////1.定义了一个Solution类，其中的letterCombinations函数接受了
////一个数字字符串作为输入
////2.使用递归生成所有可能的字母组合，backtrack函数负责在递归
////过程中构建组合，直到字符串的每个数字被处理完为止
////#include<iostream>
////#include<vector>
////#include<string>
////#include<unordered_map>
////
////class Solution {
////public:
////	std::vector<std::string> letterCombinations(std::string digits) {
////		std::vector<std::string> result;
////		if (digits.empty()) {
////			return result;
////		}
////
////		std::unordered_map<char, std::string> digitToLetters = {
////			{ '2', "abc" },
////			{'3', "def"},
////			{'4', "ghi"},
////			{'5', "jkl"},
////			{'6', "mno"},
////			{'7', "pqrs"},
////			{'8', "tuv"},
////			{'9', "wxyz"}
////		};
////
////		backtrack(result, "", digits, 0, digitToLetters);
////		return result;
////	}
////
////	void backtrack(std::vector<std::string>& result, std::string current, const std::string& digits, int index, const std::unordered_map<char, std::string>& digitToLetters) {
////		if (index == digits.size()) {
////			result.push_back(current);
////			return;
////		}
////
////		char digit = digits[index];
////		const std::string& letters = digitToLetters.at(digit);
////
////		for (char letter : letters) {
////			backtrack(result, current + letter, digits, index + 1, digitToLetters);
////		}
////	}
////};
////
////int main() {
////	Solution solution;
////	std::string digits = "23";
////	std::vector<std::string> result = solution.letterCombinations(digits);
////
////	std::cout << "Letter combinations for digits \"" << digits << "\":" << std::endl;
////	for (const std::string& str : result) {
////		std::cout << str << " ";
////	}
////
////	return 0;
////}
////第十八题
////算法：
////1，对输入数组nums进行排序
////2，使用两个嵌套循环遍历数组，选择
////前两个数nums[i]和nums[j]
////3.使用双指针技巧来寻找另外两个数nums[left]
////和nums[right]，使得他们的和等于
////target-nums[i]-nums[j]
////#include<iostream>
////#include<vector>
////#include<algorithm>
////
////using namespace std;
////
////vector<vector<int>> fourSum(vector<int>& nums, int target) {
////	
////}
////int max(int num1, int num2)
////{
////	/* 局部变量声明 */
////	int result;
////
////	if (num1 > num2) {
////		result = num1;
////	}
////	else {
////		result = num2;
////	}
////	return result;
////}
//#include <stdio.h>
//
///* 函数声明 */
//int max(int num1, int num2);
//
//int main()
//{
//	/* 局部变量定义 */
//	int a = 100;
//	int b = 200;
//	int ret;
//
//	/* 调用函数来获取最大值 */
//	ret = max(a, b);
//
//	printf("Max value is : %d\n", ret);
//
//	return 0;
//}
//
/////* 函数返回两个数中较大的那个数 */
//int max(int num1, int num2)
//{
//	/* 局部变量声明 */
//	int result;
//
//	if (num1 > num2)
//		result = num1;
//	else
//		result = num2;
//
//	return result;
//}
//#include <stdio.h>
//
//int main()
//{
//	int var_runoob = 10;
//	int *p;              // 定义指针变量
//	p = &var_runoob;
//
//	printf("var_runoob 变量的地址： %p\n", p);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int  var = 20;   /* 实际变量的声明 */
//	int  *ip;        /* 指针变量的声明 */
//
//	ip = &var;  /* 在指针变量中存储 var 的地址 */
//
//	printf("var 变量的地址: %p\n", &var);
//
//	/* 在指针变量中存储的地址 */
//	printf("ip 变量存储的地址: %p\n", ip);
//
//	/* 使用指针访问值 */
//	printf("*ip 变量的值: %d\n", *ip);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = NULL;
//
//	fp = fopen("/tmp/test.txt", "w+");
//	fprintf(fp, "This is testing for fprintf...\n");
//	fputs("This is testing for fputs...\n", fp);
//	fclose(fp);
//}
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = NULL;
//	char buff[255];
//
//	fp = fopen("/tmp/test.txt", "r");
//	fscanf(fp, "%s", buff);
//	printf("1: %s\n", buff);
//
//	fgets(buff, 255, (FILE*)fp);
//	printf("2: %s\n", buff);
//
//	fgets(buff, 255, (FILE*)fp);
//	printf("3: %s\n", buff);
//	fclose(fp);
//
//}
//struct Stu
//{
//	char name[20];//名字
//	int age;      //年龄
//	char sex[5];  //性别
//	char id[15]; //学号
//};
//#include<stdio.h>
//int main()
//{
//	//定义结构体变量并对其进行初始化
//	struct Stu s = { "张三", 18, "nan", "220210101" };
//	//两种结构体访问操作符
//	// . 操作符
//	printf("%s\t%d\t%s\t%s\n", s.name, s.age, s.sex, s.id);
//	// -> 操作符
//	struct Stu* ps = &s;  //定义结构体指针变量 ps 并将 s 的地址赋给 ps
//	printf("%s\t%d\t%s\t%s\n", ps->name, ps->age, ps->sex, ps->id);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("Hello Nowcoder!");
//	return 0;
//}
//
//
//
//
//
//
////}
//#include <stdio.h> 
//int main() { 
//	int a = 0;
//	scanf("%d", &a); 
//	printf("%d", a); 
//	return 0;
//}
//typedef struct DNode
//{
//	ElemType data;
//	struct DNode * prior, *next;
//}DNode, * DoubleList;
