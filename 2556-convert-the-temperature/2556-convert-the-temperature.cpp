class Solution {
public:
    vector<double> convertTemperature(double celsius) {
    vector<double>arr;
    double kelvin=celsius+273.15;
    double fahrenheit=(celsius*1.80)+32.00;
    arr.push_back(kelvin);
    arr.push_back(fahrenheit);
    return arr;
    }
};