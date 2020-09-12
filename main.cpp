#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    using std::cout;
    using std::cin;
    std::cout<< "Zdravstvyute! Vvedite znachenia dla peremennuh po odnomy";
    int x,b;
    bool n,m,k,l;
    unsigned int a;
    unsigned short int c,d,e,f,w;
    cin >> x;
    cin >> a;
    cin >> n;
    cin >> m;
    cin >> k;
    cin >> l;
    cin >> b;
    cin >> e;
    cin >> d;
    cin >> c;
    cin >> f;
    w=((~e)|d&(c^f));
    cout << std::setprecision(1)<< x*x+3*x*x*x-2 << showpos<<std::endl;
    cout << std::setprecision(3)<<5*abs(a)-std::sqrt(3*a+1) <<std::endl;
    cout << std::boolalpha << ((!n)||(m!=k)&&(!l)) << std::endl ;
    cout << (std::pow(2,b)) << ' ' << std::oct<<(std::pow(2,b))<<std::endl;
    cout <<  std::showbase<< std::internal <<std::hex<< std::setw(6)<< std::setfill('0')<<w<< std::endl ;
    return 0;
}
