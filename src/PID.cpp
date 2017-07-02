#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    _Kp = Kp;
    _Ki = Ki;
    _Kd = Kd;
    prev_error = 0;
    int_error = 0;
}

void PID::UpdateError(double cte) {
    int_error += cte;

    p_error = cte * _Kp;
    i_error = int_error * _Ki;
    d_error = (cte - prev_error) * _Kd;
    prev_error = cte;
}

double PID::TotalError() {
    double total_error = p_error + i_error + d_error;
    return total_error;
}

