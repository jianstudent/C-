#include <iostream>
using namespace std;

int countVowels(const char* p);

int main()
{
    string t;
    cin >> t;
    const char* p = t.c_str(); 
    countVowels(p);
    return 0; 
}

int countVowels(const char* p)
{
    int num = 0; 
    while (*p != '\0')
    {
        
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
            num++;
        p++; 
    }
    cout << "Number of vowels: " << num << endl;
    return num; 
}