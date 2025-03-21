// SOAL 1
// 1. Sum of Digits
//#include <iostream>
//
//int main()
//{
//	int count = 4;
//	int result = 0;
//	for (int i = 1; i <= count; i++)
//	{
//		result = result + i;
//	}
//
//    std::cout << "Result :" << result;
//}

// SOAL 2
// 2. Reverse a Number
//#include <iostream>
//
//int main()
//{
//	int count = 4;
//	for (int i = 1; i <= count; i++)
//	{
//		std::cout << i;
//	}
//
//	std::cout << std::endl;
//
//	for (int i = count; i >= 1; i--)
//	{
//		std::cout << i;
//	}	
//}

// SOAL 3
//3. Check Prime Number
//#include <iostream>
//
//int main()
//{
//	int n = 10;
//
//	if (n <=1)
//	{
//		std::cout << n <<  " is Not Prime";
//		return 0;
//	}
//
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			std::cout << n << " is Not Prime";
//			return 0;
//		}
//	}
//
//	std::cout << n << " is Prime";
//}

// SOAL 4
//4. Faktorial
//#include <iostream>
//
//int main()
//{
//	int n = 5;
//	int result = 1;
//	if (n == 0 || n == 1)
//	{
//		std::cout << "Faktorial dari " << n << " adalah 1";
//		return 0;
//	}
//
//	for (int i = 2; i <= n; i++)
//	{
//		result *= i;
//	}
//
//	std::cout << "Faktorial n adalah " << result;
//}

// SOAL 5
//5. Find Maximum in an Array
//#include <iostream>
//
//int main()
//{
//	int n[5] = { 3, 1, 7, 9, 5 };
//	int max = n[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (n[i] > max)
//		{
//			max = n[i];
//		}
//	}
//
//	std::cout << "Nilai Max adalah " << max;
//}
// SOAL 6
//6.  Count Vowels in a String
//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string n = "anton paramecium";
//	int count = 0;
//	std::string konsonan = "";
//	for (int i = 0; i < n.length(); i++)
//	{	
//		if (n[i] == 'a' || n[i] == 'i' || n[i] == 'u' || n[i] == 'e' || n[i] == 'o')
//		{
//			count++;
//			konsonan += n[i];
//		}
//	}
//
//	std::cout << "Total konsonan adalah " << count;
//	std::cout << std::endl;
//	std::cout << "Konsonan adalah " << konsonan;
//}
// SOAL 7
//7. Check Palindrome Number
//#include <iostream>
//#include <string>
//
//int main()
//{
//	int count = 123;
//	std::string n = std::to_string(count);
//	std::string reverse = "";
//
//	for (int i = n.length() - 1; i >= 0; i--)
//	{
//		reverse += n[i];
//	}
//
//	if (n == reverse)
//	{
//		std::cout << count << " is Palindrome";
//	}
//	else
//	{
//		std::cout << count << " is Not Palindrome";
//	}
//}
// SOAL 8
//8. Fibonacci Series (First N Terms)
#include <iostream>
#include <string>

int main()
{
	int count = 6;
	int n1 = 0, n2 = 1, n3;
	std::string result = "0 1 ";

	for (int i = 2; i < count; i++)
	{
		n3 = n1 + n2;
		result += std::to_string(n3) + " ";
		n1 = n2;
		n2 = n3;
	}

	std::cout << result;
}