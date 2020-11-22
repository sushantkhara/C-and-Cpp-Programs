#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;
int divide(int a, int b){
                            if(b == 0)
                                return -1;
                            if((a%b)== 0)
                                return 1;
                            else
                                return 0;
}
int divide(int a){
                            int i, j = a/2, flag = 1;
                            for(i=2; (i<=j/2)&& (flag); i++){
                                if((a%i)== 0)
                                    flag = 0;
                            }
                            return flag;
}

int main()
{
    system("cls");
    int ch, res, a, b;
    do{
        cout<<"1. check for divisibility \n";
        cout<<"2.check for prime\n";
        cout<<"3.exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        cout<<"\n";
        switch(ch){
            case 1: cout<<"Enter Numerator and denominator\n";
                    cin>> a >> b;
                    res = divide(a,b);
                    cout<<((res)?"it is":"it is not")<<"\n";
                    break;
            case 2: cout<<"Enter the number\n";
                    cin>> a;
                    res = 0;
                    res = divide(a);
                    cout<<((res)?"it is":"it is not")<<"\n";
                    break;
             case 3: break;
             default: cout<<"Wrong Choice!!\n";

                    };
    }
    while (ch > 0 && ch < 3 );
    return 0;
}
