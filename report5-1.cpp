#include<iostream>
using namespace std;

struct PhysicalData{
    double lengh;
    double weight;
};

double BMI(PhysicalData data){
    return data.weight / ((data.lengh / 100) * (data.lengh / 100));
}

int main(void){
    PhysicalData *data = new PhysicalData;
    data -> lengh = 175;
    data -> weight = 55;
    cout << BMI(*data) << endl;
    delete data;
}
