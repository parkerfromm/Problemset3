
#include <chrono>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
#define TIMER_ON

class timer
{
public:
    explicit timer(const string &label = "some function/ code");
    ~timer();
    static void silence();
    void set_label(const string &label);
    const timer &print() const;
    timer &start();
    timer &stop();
    timer &reset();
    timer &reset_and_print();
    // template<typename T>
    // string to_pretty_str(T n);

private:
    template <typename T>
    string to_pretty_str(T n) const;

    bool timing;
    string label;
    std::chrono::steady_clock::time_point start_t;
    std::chrono::steady_clock::time_point end_t;
    std::chrono::steady_clock::duration elapsed_t;
};

timer::timer(const string &label) : label(label), timing(false), elapsed_t(0)
{
}

timer::~timer()
{
    stop();
    print();
}

// delete for print
// deconstructor

void timer::silence()
{
    //
}

void timer::set_label(const string &label)
{
    this->label = label;
}

timer &timer::start()
{

#ifdef TIMER_ON
    if (!timing)
    {
        start_t = std::chrono::steady_clock::now();
        timing = true;
    }
#endif
    return *this;
}

timer &timer::stop()
{
#ifdef TIMER_ON
    if (timing)
    {
        end_t = std::chrono::steady_clock::now();
        elapsed_t += end_t - start_t;
        timing = false;
    }
#endif

    return *this;
}

timer &timer::reset()
{

#ifdef TIMER_ON
    elapsed_t = std::chrono::steady_clock::duration::zero();
    timing = false;
#endif
    return *this;
}

timer &timer::reset_and_print()
{
#ifdef TIMER_ON
    reset();
    print();
#endif
    return *this;
}

// template <typename T>
// string timer::to_pretty_str(T n) const
// {
//     std::stringstream ss;
//     ss.precision(3);
//     if (n < 1e4)
//     {
//         ss << n;
//     }
//     else if (n < 1e6)
//     {
//         int thousands = std::floor(n / 1000);
//         ss << thousands << "," << std::setw(3) << std::setfill('0') << (n % 1000);
//     }
//     else if (n < 1e9)
//     {
//         ss << n / 1.e6 << "million";
//     }

//     else if (n < 1e12)
//     {
//         ss << n / 1.e9 << "billion";
//     }
//     else
//     {
//         ss << n / 1.e12 << "trillion";
//     }

//     return ss.str();
// }

const timer &timer::print() const
{
    // auto elapsed= std::chrono::duration_cast<std::chrono::seconds>(elapsed_t).count();

    auto elapsed_seconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed_t).count();
    cout << elapsed_seconds << elapsed_seconds
         << " nano seconds spent in program unit '" << label << "'" << endl;

    return *this;
}