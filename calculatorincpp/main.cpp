#include <iostream>

using namespace std;

int main()
{
    float a,b,result;
    char ch;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout<<"Choose operator(+,-,*,/,):";
    cin >> ch;
    cout << "\n";
    if(ch=='+')
        result = a+b;
    else if(ch=='-')
        result = a-b;
    else if(ch=='*')
        result = a*b;
    else if(ch=='/')
        result = a/b;
    else{
        cout<<"Entered a wrong operator!!\n";
        goto lb;
    }
    cout<< "\nThe result is = \n"<<result;
    lb:
    return 0;
}
