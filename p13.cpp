//220130318058
//krisha zalavadiya
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Monday;
    cout << "Day " << today+1;
    return 0;
}
