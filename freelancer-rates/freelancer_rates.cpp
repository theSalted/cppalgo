// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

#include<cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    return 8.0 * hourly_rate;
}

double apply_discount(double amount, double discount) {
    return amount * (1.0 - discount / 100.0);
}

// apply_discount calculates the y rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    return ceil(apply_discount(daily_rate(hourly_rate) * 22, discount));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    return floor((double)budget / daily_rate(apply_discount(hourly_rate, discount)));
}
