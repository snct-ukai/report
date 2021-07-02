#include<iostream>
#include<string>
using namespace std;

class Pet {
    private:
        string name;
    public:
        Pet(string n):name(n){
        }
        void Name(){
            cout << name << endl;
        }
        virtual void Voice() = 0;
};

class Dog : public Pet{
    public:
        Dog(string n):Pet(n){
        }
        void Voice(){
            cout << "わん" << endl;
        }
};

class Cat : public Pet{
    public:
        Cat(string n):Pet(n){
        }
        void Voice(){
            cout << "にゃー" << endl;
        }
};

int main(){
    const int n = 4;
    Pet* pets[n];
  
    pets[0] = new Dog("pochi");
    pets[1] = new Cat("tama");
    pets[2] = new Cat("mike");
    pets[3] = new Dog("kai");
    
    for (int i=0; i<n; i++){
        pets[i]->Name();
        pets[i]->Voice();
    }
    
    for (int i=0; i<n; i++){
        delete pets[i];
    }

    return 0;
} 