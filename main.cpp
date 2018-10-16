/*

*/

#include<iostream>
#include<string>

using namespace std;

int get_A ( string s);

int get_a ( string s);

bool A ( char c);

bool a ( char c);

int main()
{
    string s;
    int new_A_count;
    int new_a_count;

    cout << "please in put your string." << endl;
    cin >> s;

    new_A_count = get_A ( s );
    new_a_count = get_a ( s );

    cout << "A's: " << new_A_count << endl;
    cout << "a's: " << new_a_count << endl;

    return 0;
}

int get_A ( string s)
{
    int count = 0;
    for ( int i=0; i<s.size(); i++)
        {
            char c = s.at(i);
            if ( A ( c ) )
            {
                count ++;
            }

        }

    return count;
}

int get_a ( string s)
{
    int count = 0;
    for ( int i=0; i<s.size(); i++)
        {
            char c = s.at(i);
            if ( a ( c ) )
            {
                count++;
            }
        }

    return count;
}

bool A ( char c)
{
    return c == 'A';
}

bool a (char c)
{
    return c == 'a';
}
