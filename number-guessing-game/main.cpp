#include <bits/stdc++.h> 

using namespace std; 

long long generate_number()
{
	srand(time(0)); 
	
	long long num = rand() % 101; 	
	return num; 
} 

int main()
{
	cout << "Hello, This is Game About Finding Nummber!\n"; 
	cout << "Start the Game, Good luck.\n" << endl;
		
	long long attempt = 5;	 
	long long find = generate_number(); 

	while (attempt--)
	{
		long long n; 
		cin >> n; 

		if (n == find)
		{
			cout << "Good Game, You Win.\n" << endl; 
			return 0; 
		} 
		else if (n > find)
		{
			cout << "Try Smaller Number!\n" << endl; 
		} 
		else
		{
			cout << "Try Bigger Number!\n" << endl; 
		}
	} 

	cout << "Unfortunetly, You Losed!\n" << endl; 
	cout << "Your NUmber Was: " << find << ".\n"; 

	return 0; 
}     
