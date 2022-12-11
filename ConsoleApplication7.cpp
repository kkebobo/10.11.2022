#include <iostream>
#include <string>
using namespace std;


struct Device
{
    string DeviceType;
    string Denomination;
    string Model;
    string Brand;
    double GuaranteePeriod;
    double Price;
    string DateOfSale;
};


Device FillDevice()
{
    Device temp;
    cout << "Please, enter device type:";
    cin >> temp.DeviceType;
    cout << "Please, enter denomination:";
    cin >> temp.Denomination;
    cout << "Please, enter model:";
    cin >> temp.Model;
    cout << "Please, enter brand:";
    cin >> temp.Brand;
    cout << "Please, enter guarantee period:";
    cin >> temp.GuaranteePeriod;
    cout << "Please, enter price:";
    cin >> temp.Price;
    cout << "Please, enter date of sale:";
    cin >> temp.DateOfSale;


    return temp;
}


void ShowDevice(const Device& device)
{
    cout << "Device type - " << device.DeviceType << "\n";
    cout << "Denomination - " << device.Denomination << "\n";
    cout << "Model - " << device.Model << "\n";
    cout << "Brand - " << device.Brand << "\n";
    cout << "Guarantee period - " << device.GuaranteePeriod << "\n";
    cout << "Price - " << device.Price << "\n";
    cout << "Date of sale - " << device.DateOfSale << "\n";
}


int main()
{
    Device device = FillDevice();
    ShowDevice(device);
}