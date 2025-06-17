#include<iostream>
using namespace std;

    bool isHappy(int n) {
        int num = 0;
        int rem = 0;

        for(int i = n; i>=1; i=i/10){
            rem = i%10;
            num += rem*rem;

        if(i<10 && num==1)
            break;

        if(i<10 && num!=1){
            if(num<10)
                return num==7;
            else
                i = num*10;
                num = 0;
        }


    }
        return true;
    }

int main()
{
    int n;
    
    cout<<"Enter a number: ";
    cin>>n;

    if(isHappy(n))
        cout<<"Happy!!!!!!!!!!!!!"<<endl;
    else
        cout<<"NOT Happy"<<endl;
    

    return 0;
}