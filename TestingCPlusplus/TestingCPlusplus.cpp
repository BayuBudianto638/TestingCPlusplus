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
//#include <iostream>
//#include <string>
//
//int main()
//{
//	int count = 6;
//	int n1 = 0, n2 = 1, n3;
//	std::string result = "0 1 ";
//
//	for (int i = 2; i < count; i++)
//	{
//		n3 = n1 + n2;
//		result += std::to_string(n3) + " ";
//		n1 = n2;
//		n2 = n3;
//	}
//
//	std::cout << result;
//}

// SOAL 9 9. Check Armstrong Number
//#include <iostream>
//#include <string>
//
//int main()
//{
//	int count = 123;
//	std::string n = std::to_string(count);
//	int result = 0;
//	for (int i = 0; i < n.length(); i++)
//	{
//		int temp = n[i] - '0';
//		result += temp * temp * temp;
//	}
//	if (result == count)
//	{
//		std::cout << count << " is Armstrong Number";
//	}
//	else
//	{
//		std::cout << count << " is Not Armstrong Number";
//	}
//}

// SOAL 10 10. Find Second Largest Number in an Array
//#include <iostream>
//#include <string>
//int main()
//{
//	int n[5] = { 3, 1, 7, 9, 5 };
//	int max = n[0];
//	int secondMax = n[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (n[i] > max)
//		{
//			secondMax = max;
//			max = n[i];
//		}
//		else if (n[i] > secondMax)
//		{
//			secondMax = n[i];
//		}
//	}
//
//	std::cout << "Nilai Max adalah " << max;
//	std::cout << std::endl;
//	std::cout << "Nilai Second Max adalah " << secondMax;
//}

//// SOAL 11 13. Greatest Common Divisor (GCD) of Two Numbers
//#include <iostream>
//
//int main()
//{
//	int n1 = 10;
//	int n2 = 15;
//	int result = 1;
//	for (int i = 1; i <= n1 && i <= n2; i++)
//	{
//		if (n1 % i == 0 && n2 % i == 0)
//		{
//			result = i;
//		}
//	}
//
//	std::cout << "GCD dari " << n1 << " dan " << n2 << " adalah " << result;
//}
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
//#include <iostream>
//#include <string>
//
//int main()
//{
//	int count = 6;
//	int n1 = 0, n2 = 1, n3;
//	std::string result = "0 1 ";
//
//	for (int i = 2; i < count; i++)
//	{
//		n3 = n1 + n2;
//		result += std::to_string(n3) + " ";
//		n1 = n2;
//		n2 = n3;
//	}
//
//	std::cout << result;
//}

// SOAL 9 9. Check Armstrong Number
//#include <iostream>
//#include <string>
//
//int main()
//{
//	int count = 123;
//	std::string n = std::to_string(count);
//	int result = 0;
//	for (int i = 0; i < n.length(); i++)
//	{
//		int temp = n[i] - '0';
//		result += temp * temp * temp;
//	}
//	if (result == count)
//	{
//		std::cout << count << " is Armstrong Number";
//	}
//	else
//	{
//		std::cout << count << " is Not Armstrong Number";
//	}
//}

// SOAL 10 10. Find Second Largest Number in an Array
//#include <iostream>
//#include <string>
//int main()
//{
//	int n[5] = { 3, 1, 7, 9, 5 };
//	int max = n[0];
//	int secondMax = n[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (n[i] > max)
//		{
//			secondMax = max;
//			max = n[i];
//		}
//		else if (n[i] > secondMax)
//		{
//			secondMax = n[i];
//		}
//	}
//
//	std::cout << "Nilai Max adalah " << max;
//	std::cout << std::endl;
//	std::cout << "Nilai Second Max adalah " << secondMax;
//}

/*
#include <iostream>

int main()
{
	int n = 3;

	if (n % 2 == 0)
	{
		std::cout << "Even";
	}
	else
	{
		std::cout << "Odd";
	}
}
*/
/*
#include <iostream>
#include <string>

int main()
{
	int n = 12345678;
	std::string count = std::to_string(n);

	std::cout << "Panjang n adalah " << count.length();
}
*/

/*
#include <iostream>

int main()
{
	int n1 = 10;
	int n2 = 15;
	int result = 1;
	for (int i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			result = i;
		}
	}
	std::cout << "GCD dari " << n1 << " dan " << n2 << " adalah " << result;
}
*/

/*
#include <iostream>
#include <array>

int main() {
	std::array<int, 5> arr = {1, 2, 3, 4, 5};
	std::cout << "Length of the array: " << arr.size() << std::endl;
	return 0;
}
*/

/*
#include <iostream>
int main() {
	std::cout << "The alignment requirement of int is: " << alignof(int) << '\n';
}
*/

/*
#include <algorithm>
#include <iostream>
using namespace std;

auto int_from( istream& in ) -> int { int x; in >> x; return x; }

auto main()
	-> int
{
	cout << "Sorting n integers provided by you.\n";
	cout << "n? ";
	int const   n   = int_from( cin );
	int*        a   = new int[n];

	for( int i = 1; i <= n; ++i )
	{
		cout << "The #" << i << " number, please: ";
		a[i-1] = int_from( cin );
	}

	sort( a, a + n );
	for( int i = 0; i < n; ++i ) { cout << a[i] << ' '; }
	cout << '\n';

	delete[] a;
}
*/

/*
#include <iostream>

int main()
{
	int n[5] = { 1, 2, 3, 4, 5};
	int arraySize = sizeof(n) / sizeof(n[0]);

	int result = 0;

	for (int i = 0; i < arraySize; i++)
	{
		result += n[i];
	}

	std::cout << "Sum array : " << result << std::endl;
}
*/

/*
#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 5> n = {1, 2, 3, 4, 5};
	int result = 0;

	for (int i = 0; i < n.size(); i++)
	{
		result += n[i];
	}

	cout << "Sum array : " << result << endl;
}

*/

/*
#include <iostream>
#include <array>

using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		cout << endl;
		for (int j = 1; j <= i; j++)
		{
			if (j == 2)
			   continue;

			cout << j;
		}
	}

	for (int i = 5; i > 0; i--)
	{
		cout << endl;
		for ( int j = 1; j < i; j++)
		{
			if (j == 2)
			   continue;

			cout << j;
		}
	}
}
*/

/*
#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 5> n = {1, 2, 3, 4, 5};

	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i];
	}

	cout << endl;

	for (int i = n.size() - 1; i >= 0; i--)
	{
		cout << n[i];
	}
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	if (n <= 1)
		cout << "Bukan bilangan prima";

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
		   cout << "Bukan bilangan prima";
		   return 0;
		}
	}

	cout << n << " adalah Bilangan Prima";
}*/

/*
#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	int result = 1;

	if (n <= 1)
	{
		result = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	cout << result;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
	int n[5] = {9, 5, 4, 8, 6};
	int size = sizeof(n) / sizeof(n[0]);
	int max = 0;
	for (int i = 0; i <= size; i++)
	{
		if (max <= n[i])
			max = n[i];
	}

	cout << "Max number : " << max;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "Hello World";
	int size = str.length();
	int count = 0;
	string strKonsonan = "";

	for (int i = 0; i <= size; i++)
	{
		if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
		{
			count += 1;
			strKonsonan += str[i];
		}
	}

	cout << "Total konsonan " << count << endl;
	cout << "Huruf konsonan " << strKonsonan;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 123;
	string strN = to_string(n);
	string rev = "";

	for (int i = strN.length() - 1; i >= 0; i--)
	{
		rev+= strN[i];
	}

	if (strN == rev)
	   cout << "Palindrome";
	else
		cout << "Not Palindrome";
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	int n = 6;
	string str = "";
	if (n == 0 || n == 1)
		str = "0 1";

	for(int i = 2; i < 6; i++)
	{
		if (n % i == 0)
		str += to_string(n);
	}

	cout << str;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int int_from( std::istream& in ) { int x = 0; in >> x; return x; }

int main()
{
	cout << "Sorting integers\n";
	cout << "You can indicate EOF via F6 or CTRL+D in Unix\n";

	vector<int> a;

	while (cin)
	{
		cout << "One number or indicate EOF : ";
		int const x = int_from(cin);
		if(!cin.fail())
		{
			a.push_back(x);
		}
	}

	sort(a.begin(), a.end());
	int const n = a.size();
	for (int i = 0; i <= n; i++)
	{
		cout << a[i] << ' ';
		cout << '\n';
	}
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	vector<int> vec(arr, arr + size);
	vec.push_back(6);

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}

}
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[5] = {6, 5, 7, 1, 3};
	int size = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + size);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[6] = {9, 2, 1, 4, 3, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.


void plusMinus(vector<int> arr) {
	int positive = 0;
	int negative = 0;
	int zero = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > 0)
			positive += 1;
		if (arr[i] < 0)
			negative += 1;
		if (arr[i] == 0)
			zero += 1;
	}

	double resultPos = positive / arr.size();
	double resultNeg = negative / arr.size();
	double resultZero = zero / arr.size();

	cout << resultPos << endl;
	cout << resultNeg << endl;
	cout << resultZero << endl;
}

int main()
{
	string n_temp;
	getline(cin, n_temp);

	int n = stoi(ltrim(rtrim(n_temp)));

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split(rtrim(arr_temp_temp));

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	plusMinus(arr);

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void staircase(int n) {
   for (int i = 1; i <= n; i++)
   {
	   int spaces = n - i;
	   cout << string(spaces, ' ');
	   for (int j = i; j > 0; j--)
	   {
			cout << "#";
	   }
	   cout << endl;
   }
}

int main()
{
	string n_temp;
	getline(cin, n_temp);

	int n = stoi(ltrim(rtrim(n_temp)));

	staircase(n);

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}
*/
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr) {
	long totalSum = 0;
	for (int num : arr) {
		totalSum += num;
	}

	long minSum = totalSum - *max_element(arr.begin(), arr.end());
	long maxSum = totalSum - *min_element(arr.begin(), arr.end());

	cout << minSum << " " << maxSum << endl;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	miniMaxSum(arr);

	return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr1 = {1, 3, 5};
	vector<int> arr2 = {2, 7, 8, 10, 9};

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	for (int i = 0; i < arr2.size(); i++)
	{
		arr1.push_back(arr2[i]);
	}

	sort(arr1.begin(), arr1.end());

	for (int i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i] << ",";
	}
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
   string str1 = "listen";
   string str2 = "sigent";

   if (str1.length() != str2.length())
   {
	  cout << "Not anagram";
	  return 0;
   }

   sort(str1.begin(), str1.end());
   sort(str2.begin(), str2.end());

   if (str1 == str2)
		cout << "Anagram";
	else
		cout << "Not anagram";
}
*/

/*
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeatingCharacter(string str) {
	unordered_map<char, int> frequency;

	// Count frequency of each character
	for (char c : str) {
		frequency[c]++;
	}

	// Find the first character with frequency of 1
	for (char c : str) {
		if (frequency[c] == 1) {
			return c; // Return the first non-repeating character
		}
	}

	return '\0'; // Return null character if no non-repeating character is found
}

int main() {
	string str = "aabccdeff"; // Example input
	char result = firstNonRepeatingCharacter(str);

	if (result != '\0') {
		cout << "First non-repeating character: " << result << endl; // Output: 'b'
	} else {
		cout << "No non-repeating characters found." << endl;
	}

	return 0;
}

*/

/*
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.


int birthdayCakeCandles(vector<int> candles) {
	sort(candles.begin(), candles.end());

	int tallest = candles.back();

	int num = count(candles.begin(), candles.end(), tallest); // cara tercepat
	// cara terlambat
	//for (int height : candles) {
	//    if (height == tallest) {
	//        count++;
	//    }
	//}

	return num;

}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string candles_count_temp;
	getline(cin, candles_count_temp);

	int candles_count = stoi(ltrim(rtrim(candles_count_temp)));

	string candles_temp_temp;
	getline(cin, candles_temp_temp);

	vector<string> candles_temp = split(rtrim(candles_temp_temp));

	vector<int> candles(candles_count);

	for (int i = 0; i < candles_count; i++) {
		int candles_item = stoi(candles_temp[i]);

		candles[i] = candles_item;
	}

	int result = birthdayCakeCandles(candles);

	fout << result << "\n";

	fout.close();

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}
*/

#include <iostream>
#include <string>
using namespace std;

string convertTo24HourFormat(const string& time12) {
	// Extract hours, minutes, and period (AM/PM)
	int hours = stoi(time12.substr(0, 2)); // Extract first two characters and convert to integer
	string minutes = time12.substr(3, 2); // Extract minutes
	string period = time12.substr(6, 2);  // Extract AM/PM

	// Convert hours to 24-hour format
	if (period == "AM" && hours == 12) {
		hours = 0; // Midnight case (12 AM -> 00)
	}
	else if (period == "PM" && hours != 12) {
		hours += 12; // Afternoon case
	}

	// Format the hours to always have two digits
	string hour24 = (hours < 10 ? "0" : "") + to_string(hours);

	// Combine hours and minutes in 24-hour format
	return hour24 + ":" + minutes;
}

int main() {
	string time12;
	cout << "Enter time in 12-hour format (hh:mmAM/PM): ";
	cin >> time12;

	string time24 = convertTo24HourFormat(time12);
	cout << "Time in 24-hour format: " << time24 << endl;

	return 0;
}