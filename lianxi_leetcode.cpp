////��ʮ����
////�㷨��
////1.������һ��Solution�࣬���е�letterCombinations����������
////һ�������ַ�����Ϊ����
////2.ʹ�õݹ��������п��ܵ���ĸ��ϣ�backtrack���������ڵݹ�
////�����й�����ϣ�ֱ���ַ�����ÿ�����ֱ�������Ϊֹ
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
////��ʮ����
////�㷨��
////1������������nums��������
////2��ʹ������Ƕ��ѭ���������飬ѡ��
////ǰ������nums[i]��nums[j]
////3.ʹ��˫ָ�뼼����Ѱ������������nums[left]
////��nums[right]��ʹ�����ǵĺ͵���
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
////	/* �ֲ��������� */
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
///* �������� */
//int max(int num1, int num2);
//
//int main()
//{
//	/* �ֲ��������� */
//	int a = 100;
//	int b = 200;
//	int ret;
//
//	/* ���ú�������ȡ���ֵ */
//	ret = max(a, b);
//
//	printf("Max value is : %d\n", ret);
//
//	return 0;
//}
//
/////* ���������������нϴ���Ǹ��� */
//int max(int num1, int num2)
//{
//	/* �ֲ��������� */
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
//	int *p;              // ����ָ�����
//	p = &var_runoob;
//
//	printf("var_runoob �����ĵ�ַ�� %p\n", p);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int  var = 20;   /* ʵ�ʱ��������� */
//	int  *ip;        /* ָ����������� */
//
//	ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */
//
//	printf("var �����ĵ�ַ: %p\n", &var);
//
//	/* ��ָ������д洢�ĵ�ַ */
//	printf("ip �����洢�ĵ�ַ: %p\n", ip);
//
//	/* ʹ��ָ�����ֵ */
//	printf("*ip ������ֵ: %d\n", *ip);
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
//	char name[20];//����
//	int age;      //����
//	char sex[5];  //�Ա�
//	char id[15]; //ѧ��
//};
//#include<stdio.h>
//int main()
//{
//	//����ṹ�������������г�ʼ��
//	struct Stu s = { "����", 18, "nan", "220210101" };
//	//���ֽṹ����ʲ�����
//	// . ������
//	printf("%s\t%d\t%s\t%s\n", s.name, s.age, s.sex, s.id);
//	// -> ������
//	struct Stu* ps = &s;  //����ṹ��ָ����� ps ���� s �ĵ�ַ���� ps
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
