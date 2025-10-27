#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << "Some Text Here" << endl;
    const double PI = acos(-1.0);

    double alpha_deg, beta_deg;
    cout << ": ";
    if (!(cin >> alpha_deg)) return 0;
    cout << ": ";
    if (!(cin >> beta_deg)) return 0;

    double alpha = alpha_deg * PI / 180.0;
    double beta = beta_deg * PI / 180.0;

    double z1 = pow(cos(alpha) - cos(beta), 2) - pow(sin(alpha) - sin(beta), 2);

    double diff_half = (alpha - beta) / 2.0;
    double z2 = -4.0 * pow(sin(diff_half), 2) * cos(alpha + beta);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
