    #include<iostream>
    #include<string>
    #include<cmath>
    using namespace std;
    #define INT_MAX = 2**31 -1
    #define INT_MIN = -(2**31)
    
    int reverse(int x) {
        string s = to_string(x);
        int n = s.length();
        if(x>0){
           int pop;
           int rev =0;
            int temp =x;
            while(temp!=0){
                pop = temp%10;
                rev  = rev*10 + pop;
                temp = temp/10;
            }
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            else
            return rev;
        }
        else{
           int pop;
           int rev =0;
            int temp =-x;
            while(temp!=0){
                pop = temp%10;
                rev  = rev*10 + pop;
                temp = temp/10;
            }
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            else 
            return -rev;
        }
    }
    int main(){
        int x;
        cin>>x;
        cout<<reverse(x);
    }