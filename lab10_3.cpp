#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        float _sumsum;
        _sumsum = stof(textline);
        sum += _sumsum;
        sum_of_square += _sumsum * _sumsum;
        count++;
    }
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    float _Mean = sum/count;
    cout << "Mean = " << _Mean << "\n";
    float _std = sqrt((sum_of_square / count) - (_Mean * _Mean));
    cout << "Standard deviation = " << _std;
}