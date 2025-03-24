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
/*
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
*/
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

/*
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
	} else if (period == "PM" && hours != 12) {
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
*/
/*
#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
	 int hours = stoi(s.substr(0, 2));
	string minutes = s.substr(3, 2);
	string seconds = s.substr(6, 2);
	string period = s.substr(8, 2);

	if (period == "AM" && hours == 12) {
		hours = 0;
	}
	else if (period == "PM" && hours != 12) {
		hours += 12;
	}

	string hour24 = (hours < 10 ? "0" : "") + to_string(hours);

	return hour24 + ":" + minutes + ":" + seconds;
}

int main()
{
	string s = "07:05:45PM";
	string result = timeConversion(s);

	cout << result << "\n";
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int findMeetingPoint(int start1, int step1, int start2, int step2) {
	int x = start1;
	while (true) {
		if ((x - start2) % step2 == 0) {
			return x;
		}
		x += step1; // Tambahkan lompatan dari deret pertama
	}
}

int main() {
	int start1 = 21, step1 = 6;
	int start2 = 47, step2 = 3;

	int meetingPoint = findMeetingPoint(start1, step1, start2, step2);
	cout << "Nilai tempat mereka bertemu: " << meetingPoint << endl;

	return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
	vector<int> record;
	int rec = scores[0];
	int num = scores[0];
	int max = 0;
	int min = 0;

	for(int i = 0; i < scores.size(); i++)
	{
		if (rec < scores[i])
		{
			rec = scores[i];
			max += 1;
		}
		else if (num > scores[i])
		{
			min += 1;
		}
	}

	record.push_back(max);
	record.push_back(min);
	return record;
}

int main()
{
	// vector<int> scores = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
	vector<int> scores = {2, 4, 21, 36, 37, 2, 35, 0, 2, 42};

	vector<int> result = breakingRecords(scores);

	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << " ";
		}
	}

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
	vector<int> n = {8, 3, 1, 5, 2 };

	sort(n.begin(), n.end());

	int result = n[1];

	cout << result;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> n1 = { 1, 2, 4, 5, 6 };
	vector<int> n2 = {2, 4, 6, 8};
	vector<int> r;

	for (int i = 0; i <= n1.size();i++)
	{
		for (int j = 0; j <= n2.size(); j++)
		{
			if (n1[i] == n2[j])
				r.push_back(n1[i]);
		}
	}

	for (int num : r)
	{
		cout << num;
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
	vector<int> n1 = { 1, 2, 4, 5, 6 };
	vector<int> n2 = {3, 7, 8};
	vector<int> r;
	bool b = false;

	for (int i = 0; i <= n1.size();i++)
	{
		for (int j = 0; j <= n2.size(); j++)
		{
			if (n1[i] == n2[j])
				r.push_back(n1[i]);
		}
	}

	for (int i = 0; i <= n2.size(); i++)
	{
		if (n2[i] == r[i])
			b = true;
		else
		{
			cout << "NO";
			b = false;
			break;
		}
	}

	if (b == true)
		cout << "YES";
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse
using namespace std;

// Function to rotate array to the right by k positions
void rotateArray(vector<int>& arr, int k) {
	int n = arr.size();

	k = k % n;

	reverse(arr.begin(), arr.end());
	reverse(arr.begin(), arr.begin() + k);
	reverse(arr.begin() + k, arr.end());
}

int main() {
	vector<int> arr = {1, 2, 3, 4, 5};
	int k = 4;

	rotateArray(arr, k);

	cout << "Rotated Array: ";
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

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
	vector<int> n1 = { 1, 2, 4, 5, 6 };
	vector<int> n2 = {2, 4, 7};
	vector<int> r;
	bool b = false;

	for (int i = 0; i <= n1.size();i++)
	{
		for (int j = 0; j <= n2.size(); j++)
		{
			if (n1[i] == n2[j])
				r.push_back(n1[i]);
		}
	}

	for (int i = 0; i <= n2.size(); i++)
	{
		if (n2[i] == r[i])
			b = true;
		else
		{
			b = false;
			break;
		}
	}

	cout << (b ? "YES" : "NO");
}
*/
/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
	vector<int> record;
	int minCount = 0;
	int maxCount = 0;

	int max = scores[0];
	int min = scores[0];

	for (int i = 1; i < scores.size(); i++) {
		if (scores[i] < min) {
			min = scores[i];
			minCount++;
		}
		if (scores[i] > max) {
			max = scores[i];
			maxCount++;
		}
	}

	record.push_back(maxCount);
	record.push_back(minCount);
	return record;
}

int main()
{
	vector<int> scores = { 10, 5, 20, 20, 4, 5, 2, 25, 1 };
	vector<int> result = breakingRecords(scores);

	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << " ";
		}
	}

	cout << "\n";

	return 0;
}

*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
	int counter = 0;
	int j = 1;
	int num = 0;

	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j <= m; j++)
		{
			num += s[j];
			if (num > d || num == d)
			{
				counter++;
				i = j;
			}
		}
	}

	return counter;
}

int main()
{
	vector<int> s = {4, 5, 4, 2, 4, 5, 2, 3, 2, 1, 1, 5, 4};
	int res = birthday(s, 15, 4);
	cout << endl;

	cout << res;
	return 0;
}
*/

/*
#include <iostream>
#include <sstream> // For std::istringstream
#include <vector>
#include <string>
#include <Algorithm>

using namespace std;

vector<string> splitWords(const string& input) {
	vector<string> words;
	istringstream iss(input);
	string word;

	while (iss >> word) {
		words.push_back(word);
	}

	return words;
}

int main() {
	string sentence = "Hello World!";
	vector<string> result = splitWords(sentence);

	reverse(result.begin(), result.end());
	cout << "Words in the sentence:" << endl;
	for (const string& word : result) {
		cout << word ;
	}

	return 0;
}
*/
//
//#include <iostream>
//#include <sstream> 
//#include <vector>
//#include <string>
//#include <Algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<int> s = { 4, 5, 4, 2, 4, 5, 2, 3, 2, 1, 1, 5, 4 };
//	vector<int> count;
//	int k = 2;
//
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == k)
//			count.push_back(i);
//	}
//
//	for (int num : count)
//	{
//		cout << num << " ";
//	}
//}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Hello world!" << endl;
	vector<int> n = {8, 3, 2, 1};
	sort(n.begin(), n.end());

	for (int num: n)
	{
		cout << num << " ";
	}
	return 0;
}
*/

/*
#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> d = {1, 2, 3};
	d.push_front(0);
	d.push_back(4);
	d.pop_front();
	cout << "Front: " << d.front() << ", Back : " << d.back() << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> d = {1, 2, 3};
	d.push_front(5);
	d.push_back(40);
	d.pop_front();
	cout << "Front: " << d.front() << ", Back : " << d.back() << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> d = {1, 2, 3};
	d.insert(4);

	for (int x : d)
		cout << x << " ";
	return 0;
}

*/

/*
#include <map>
#include <iostream>

using namespace std;

int main()
{
	map<string, int> m;
	m["Alice"] = 30;
	m["Bob"] = 25;

	cout << "Alice age : " << m["Alice"] << endl;
}
*/
/*
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6};

	if (binary_search(v.begin(), v.end(), 3))
		cout << "Found";
	else
		cout << "Not Found";
}
*/
/*
#include <iostream>
#include <iomanip>

using namespace std;

auto main() -> int
{
	int const n_rows = 3;
	int const n_cols = 7;
	int const m[n_rows] [n_cols] =
	{
		{
			1, 2, 3, 4, 5, 6, 7
		},
		{
			8, 9, 10, 11, 12, 13, 14
		},
		{
			15, 16, 17, 18, 19, 20, 21
		}
	};

	for ( int y = 0; y < n_rows; ++y)
	{
		for (int x = 0; x < n_cols; ++x)
		{
			cout << setw(4) << m[y][x];
		}

		cout << "\n";
	}
}
*/








