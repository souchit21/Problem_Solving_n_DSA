#include<iostream>
using namespace std;


class friends{
    public:
    string name;
    int age;

};
 
int main(){
friends sneha, person_2;
sneha.name="Sneha";
sneha.age=20;
cout<<sneha.name<<endl;
person_2.name="Vishal";
cout<<person_2.name<<endl;
struct {
    int model_number;
    string company;
}car1;
car1.model_number=5855;
cout<<car1.model_number;

return 0;
}