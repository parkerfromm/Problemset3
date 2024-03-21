#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <immintrin.h>
#include <armadillo>
#include "timer.h"

////////////////////////////////////////////////////////////////////////////////////////////////
/// im not sure if more effective way but from example since we want tos ubtract by 3.14,   ////
/// then assuming mos logivcal thing is to subtract that nuber from every entery.           ////
/// need to consider the fact that if written in rever order so need three total overload   ////
////////////////////////////////////////////////////////////////////////////////////////////////
namespace mynamespace_i
{
    vector<double> operator+(const vector<double> &a, const vector<double> &b)
    {

        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] + b[i];
        }
        return return_vec;
    };

    vector<double> operator+(const vector<double> &a, const double &b)
    {

        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] + b;
        }
        return return_vec;
    };

    vector<double> operator+(const double &b, const vector<double> &a)
    {

        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] + b;
        }
        return return_vec;
    };

    ///////

    vector<double> operator-(const vector<double> &a, const vector<double> &b)
    {

        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] - b[i];
        }
        return return_vec;
    };

    vector<double> operator-(const vector<double> &a, const double &b)
    {

        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] - b;
        }
        return return_vec;
    };

    vector<double> operator-(const double &b, const vector<double> &a)
    {

        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = b - a[i];
        }
        return return_vec;
    };

    ////////

    vector<double> operator*(const vector<double> &a, const vector<double> &b)
    {
        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] * b[i];
        }
        return return_vec;
    };

    vector<double> operator*(const vector<double> &a, const double &b)
    {
        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] * b;
        }
        return return_vec;
    };
    vector<double> operator*(const double &b, const vector<double> &a)
    {
        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] * b;
        }
        return return_vec;
    };

    //////////

    vector<double> operator/(const vector<double> &a, const vector<double> &b)
    {
        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] / b[i];
        }
        return return_vec;
    };

    vector<double> operator/(const vector<double> &a, const double &b)
    {
        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = a[i] / b;
        }
        return return_vec;
    };

    vector<double> operator/(const double &b, const vector<double> &a)
    {
        vector<double> return_vec(a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            return_vec[i] = b / a[i];
        }
        return return_vec;
    };
}

// namespace mynamespace_std
// {
//     using namespace std;

//     vector<double> operator+(const vector<double> &a, const vector<double> &b)
//     {
//         vector<double> return_vec = a + b;
//         return return_vec;
//     };

//     vector<double> operator+(const vector<double> &a, const double &b)
//     {
//         vector<double> return_vec = a + b;
//         return return_vec;
//     };

//     vector<double> operator+(const double &b, const vector<double> &a)
//     {
//         vector<double> return_vec = a + b;
//         return return_vec;
//     };

//     ///////

//     vector<double> operator-(const vector<double> &a, const vector<double> &b)
//     {
//         vector<double> return_vec = a - b;
//         return return_vec;
//     };

//     vector<double> operator-(const vector<double> &a, const double &b)
//     {
//         vector<double> return_vec = a - b;
//         return return_vec;
//     };

//     vector<double> operator-(const double &b, const vector<double> &a)
//     {
//         vector<double> return_vec = b - a;
//         return return_vec;
//     };

//     ////////

//     vector<double> operator*(const vector<double> &a, const vector<double> &b)
//     {
//         vector<double> return_vec = a * b;
//         return return_vec;
//     };

//     vector<double> operator*(const vector<double> &a, const double &b)
//     {
//         vector<double> return_vec = a * b;
//         return return_vec;
//     };
//     vector<double> operator*(const double &b, const vector<double> &a)
//     {
//         vector<double> return_vec = a * b;
//         return return_vec;
//     };

//     //////////

//     vector<double> operator/(const vector<double> &a, const vector<double> &b)
//     {
//         vector<double> return_vec = a / b;
//         return return_vec;
//     };

//     vector<double> operator/(const vector<double> &a, const double &b)
//     {
//         vector<double> return_vec = a / b;
//         return return_vec;
//     };

//     vector<double> operator/(const double &b, const vector<double> &a)
//     {
//         vector<double> return_vec = b / a;
//         return return_vec;
//     };

// }

////////////////////////////////////////////////////////////////////////////////////////////////
/// im not sure if more effective way but from example since we want tos ubtract by 3.14,   ////
/// then assuming mos logivcal thing is to subtract that nuber from every entery.           ////
/// need to consider the fact that if written in rever order so need three total overload   ////
////////////////////////////////////////////////////////////////////////////////////////////////

/// problem 2(i) for problem set 3

double *add(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));

    /// ideally would need length chekc or a real api would need to consider how to
    /// handle diffrent lengths

    // only going to define this and the const version for additon;
    // try single_value(b[1])
    // {
    //     if ("Seg fault")
    // }

    for (size_t i = 0; i < size; i++)
    {
        timer.start();
        return_vec[i] = a[i] + b[i];
        timer.stop();
    }

    // catch (single_value)
    // {
    //     for (size_t i = 0; i < size; i++)
    //     {
    //         return_vec[i] = a[i] + b;
    //     }
    // }

    return return_vec;
};

double *add(const double *a, const double b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));

    /// ideally would need length chekc or a real api would need to consider how to
    /// handle diffrent lengths

    // only going to define this and the const version for additon;
    // try single_value(b[1])
    // {
    //     if ("Seg fault")
    // }

    for (size_t i = 0; i < size; i++)
    {
        timer.start();
        return_vec[i] = a[i] + b;
        timer.stop();
    }

    // catch (single_value)
    // {
    //     for (size_t i = 0; i < size; i++)
    //     {
    //         return_vec[i] = a[i] + b;
    //     }
    // }

    return return_vec;
};

double *subtract(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));

    for (size_t i = 0; i < size; i++)
    {
        timer.start();
        return_vec[i] = a[i] - b[i];
        timer.stop();
    }

    return return_vec;
};

double *subtract(const double *a, const double b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));

    for (size_t i = 0; i < size; i++)
    {
        timer.start();
        return_vec[i] = a[i] - b;
        timer.stop();
    }

    return return_vec;
};

double *multiply(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));

    for (size_t i = 0; i < size; i++)
    {
        timer.start();
        return_vec[i] = a[i] * b[i];
        timer.stop();
    }

    return return_vec;
};

double *divide(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));

    for (size_t i = 0; i < size; i++)
    {
        timer.start();
        return_vec[i] = a[i] / b[i];
        timer.stop();
    }

    return return_vec;
};

namespace mynamespace_armma
{

    using namespace arma;

    arma::vec operator+(const arma::vec &a, const arma::vec &b)
    {
        arma::vec return_vec = a + b;
        return return_vec;
    };

    arma::vec operator+(const arma::vec &a, const double &b)
    {

        arma::vec return_vec = a + b;
        return return_vec;
    };

    // arma::Row<double> operator+(const arma::Row<double> &a, const double &b)
    // {

    //     arma::Row<double> return_vec(a.size());
    //     for (size_t i = 0; i < a.size(); i++)
    //     {
    //         // timer.start();
    //         return_vec.at(i) = a(i) + b;
    //         // timer.stop();
    //     }
    //     return return_vec;
    // };

    // arma::Row<double> operator-(const arma::Row<double> &a, const arma::Row<double> &b)
    // {

    //     arma::Row<double> return_vec(a.size());
    //     for (size_t i = 0; i < a.size(); i++)
    //     {
    //         // timer.start();
    //         return_vec.at(i) = a(i) - b(i);
    //         // timer.stop();
    //     }
    //     return return_vec;
    // };

    arma::vec operator-(const arma::vec &a, const arma::vec &b)
    {

        arma::vec return_vec = a - b;
        return return_vec;
        ;
    }

    arma::vec operator-(const arma::vec &a, const double &b)
    {

        arma::vec return_vec = a - b;
        // for (size_t i = 0; i < a.size(); i++)
        // {
        //     // timer.start();
        //     return_vec.at(i) = a(i) - b;
        //     // timer.stop();
        // }
        return return_vec;
    };

    arma::vec operator*(const arma::vec &a, const arma::vec &b)
    {

        arma::vec return_vec = a % b;
        // for (size_t i = 0; i < a.size(); i++)
        // {
        //     // timer.start();
        //     return_vec.at(i) = arma::dot(a(i), b(i));
        //     // timer.stop();
        // }
        return return_vec;
    };

    arma::vec operator*(const arma::vec &a, const double &b)
    {

        arma::vec return_vec = a * b;
        // for (size_t i = 0; i < a.size(); i++)
        // {
        //     // timer.start();
        //     return_vec.at(i) = a(i) * b;
        //     // timer.stop();
        // }
        return return_vec;
    };

    // not defininf because i think its causing a recursion issue

    //     arma::vec operator/(const arma::vec &a, const arma::vec &b)
    //     {
    //         arma::vec return_vec = arma::elem_divide(a, b);
    //         // for (size_t i = 0; i < a.size(); i++)
    //         // {
    //         //     // timer.start();
    //         //     return_vec.at(i) = a(i) / b(i);
    //         //     // timer.stop();
    //         // }
    //         return return_vec;
    //     };

    //     arma::vec operator/(const arma::vec &a, const double &b)
    //     {

    //         arma::Row<double> return_vec = a / b;
    //         // for (size_t i = 0; i < a.size(); i++)
    //         // {
    //         //     // timer.start();
    //         //     return_vec.at(i) = a(i) / b;
    //         //     // timer.stop();
    //         // }
    //         return return_vec;
    //     };
}

double *add_avx512(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));
    for (size_t i = 0; i < size; i += 8)
    { // Process 8 elements at a time
        __m512d a_vec = _mm512_loadu_pd(&a[i]);
        __m512d b_vec = _mm512_loadu_pd(&b[i]);
        // start time
        timer.start();
        __m512d result_vec = _mm512_add_pd(a_vec, b_vec);
        timer.stop();
        // endtime
        _mm512_storeu_pd(&return_vec[i], result_vec);
    }

    return return_vec;
}

double *subtract_avx512(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));
    for (size_t i = 0; i < size; i += 8)
    { // Process 8 elements at a time
        __m512d a_vec = _mm512_loadu_pd(&a[i]);
        __m512d b_vec = _mm512_loadu_pd(&b[i]);

        // start time
        timer.start();
        __m512d result_vec = _mm512_sub_pd(a_vec, b_vec);
        // end time
        timer.stop();

        _mm512_storeu_pd(&return_vec[i], result_vec);
    }

    return return_vec;
}

double *multiply_avx512(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));
    for (size_t i = 0; i < size; i += 8)
    { // Process 8 elements at a time/
        __m512d a_vec = _mm512_loadu_pd(&a[i]);
        __m512d b_vec = _mm512_loadu_pd(&b[i]);
        __m512d result_vec = _mm512_mul_pd(a_vec, b_vec);
        timer.start();
        _mm512_storeu_pd(&return_vec[i], result_vec);
        timer.stop();
    }

    return return_vec;
}

double *divide_avx512(const double *a, const double *b, size_t size, timer &timer)
{

    double *return_vec = (double *)malloc(size * sizeof(double));
    for (size_t i = 0; i < size; i += 8)
    { // Process 8 elements at a time
        __m512d a_vec = _mm512_loadu_pd(&a[i]);
        __m512d b_vec = _mm512_loadu_pd(&b[i]);
        __m512d result_vec = _mm512_div_pd(a_vec, b_vec);
        timer.start();
        _mm512_storeu_pd(&return_vec[i], result_vec);
        timer.stop();
    }

    return return_vec;
}
///////////////////////////////////////////////////////////////////////////////////////////

/////im not sure im doing what they are asking hmmm////////////////

void test_i(size_t size, timer &timer)

{
    using namespace mynamespace_i;

    vector<double> a(size);
    vector<double> b(size);
    vector<double> c(size);
    vector<double> d(size);
    vector<double> e(size);

    auto fill_rand = [](vector<double> &vec_to_fill)
    {
        for (size_t i = 0; i < vec_to_fill.size(); i++)
        {
            vec_to_fill[i] = static_cast<double>(rand()) / RAND_MAX;

            if (vec_to_fill[i] == 0)
            {
                vec_to_fill[i] = 0.0001;
            }
        }
    };

    fill_rand(a);
    fill_rand(b);
    fill_rand(c);
    fill_rand(d);
    fill_rand(e);

    /////////TODO///////////
    //// add the timer right here to finish problem///

    timer.start();
    vector<double> return_vec = b * c + d / e - 3.14;
    timer.stop();
    cout << "yayyy test_i works" << endl;
};

void test_iii(size_t size, timer &timer)
{
    double *a = (double *)malloc(size * sizeof(double));
    double *b = (double *)malloc(size * sizeof(double));
    double *c = (double *)malloc(size * sizeof(double));
    double *d = (double *)malloc(size * sizeof(double));
    double *e = (double *)malloc(size * sizeof(double));

    auto fill_rand = [](double *vector_to_fill, size_t size)
    {
        for (size_t i = 0; i < size; i++)
        {
            vector_to_fill[i] = static_cast<double>(rand()) / RAND_MAX;

            if (vector_to_fill[i] == 0)
            {
                vector_to_fill[i] = 0.0001;
            }
        }
    };

    fill_rand(a, size);
    fill_rand(b, size);
    fill_rand(c, size);
    fill_rand(d, size);
    fill_rand(e, size);

    double *return_vec = add(multiply(b, c, size, timer), divide(d, e, size, timer), size, timer);
    cout << "yayyy test_iii works" << endl;
}

void test_v(size_t size, timer &timer)
{
    double *a = (double *)malloc(size * sizeof(double));
    double *b = (double *)malloc(size * sizeof(double));
    double *c = (double *)malloc(size * sizeof(double));
    double *d = (double *)malloc(size * sizeof(double));
    double *e = (double *)malloc(size * sizeof(double));

    auto fill_rand = [](double *vector_to_fill, size_t size)
    {
        for (size_t i = 0; i < size; i++)
        {
            vector_to_fill[i] = static_cast<double>(rand()) / RAND_MAX;

            if (vector_to_fill[i] == 0)
            {
                vector_to_fill[i] = 0.0001;
            }
        }
    };

    fill_rand(a, size);
    fill_rand(b, size);
    fill_rand(c, size);
    fill_rand(d, size);
    fill_rand(e, size);

    // double *return_vec = add_avx512(multiply_avx512(b, c, size, timer), divide_avx512(d, e, size, timer), size, timer);

    cout << "yayyy test_v works" << endl;
}

void test_iv(size_t size, timer &timer)
{
    using namespace mynamespace_armma;
    arma::vec a(size);
    arma::vec b(size);
    arma::vec c(size);
    arma::vec d(size);
    arma::vec e(size);

    // arma::Row<double> a(size);
    // arma::Row<double> b(size);
    // arma::Row<double> c(size);
    // arma::Row<double> d(size);
    // arma::Row<double> e(size);
    // // = arma::randu<Row<double>>(size);
    // // arma::Row<double> b = arma::randu<Row<double>>(size);
    // // arma::Row<double> c = arma::randu<Row<double>>(size);
    // // arma::Row<double> d = arma::randu<Row<double>>(size);
    // // arma::Row<double> e = arma::randu<Row<double>>(size);
    // // arma::Row<double> b(size);
    // // arma::Row<double> c(size);
    // // arma::Row<double> d(size);
    // // arma::Row<double> e(size);

    auto fill_rand = [](arma::vec &vector_to_fill, size_t size)
    {
        for (size_t i = 0; i < size; i++)
        {
            vector_to_fill.at(i) = static_cast<double>(rand()) / RAND_MAX;

    for (size_t i = 0; i < size; i++)
    {
        if (vector_to_fill(i) == 0)
        {
            vector_to_fill(i) = 0.0001;
        }
    }
        } };

    //         if (vector_to_fill(i) == 0)
    //         {
    //             vector_to_fill(i) = 0.0001;
    //         }
    //     }
    // };

    fill_rand(a, size);
    fill_rand(b, size);
    fill_rand(c, size);
    fill_rand(d, size);
    fill_rand(e, size);

    timer.start();
    arma::vec return_vec = b * c + d / e - 3.14;
    timer.stop();
    cout << "yayyy test_iV works" << endl;
}

// void test_i_std(size_t size, timer &timer)

// {
//     // using namespace mynamespace_std;
//     using namespace std;

//     vector<double> a(size);
//     vector<double> b(size);
//     vector<double> c(size);
//     vector<double> d(size);
//     vector<double> e(size);

//     auto fill_rand = [](vector<double> &vec_to_fill)
//     {
//         for (size_t i = 0; i < vec_to_fill.size(); i++)
//         {
//             vec_to_fill[i] = static_cast<double>(rand()) / RAND_MAX;
//             if (vec_to_fill[i] == 0)
//             {
//                 vec_to_fill[i] = 0.0001;
//             }
//         }
//     };

//     fill_rand(a);
//     fill_rand(b);
//     fill_rand(c);
//     fill_rand(d);
//     fill_rand(e);

//     /////////TODO///////////
//     //// add the timer right here to finish problem///

//     timer.start();
//     vector<double> return_vec = b * c + d / e - 3.14;
//     timer.stop();
//     cout << "yayyy test_i_std works" << endl;
// };

int main(int argc, char *argv[])
{
    size_t size = std::atoi(argv[1]);

    /// FINISH
    /// problem 2(i) implementation / testing
    timer timer1("(i)");
    timer timer2;
    timer timer3("(ii) for loop");
    timer timer4("arma overload");
    // timer timer5;

    test_i(size, timer1);
    test_iii(size, timer3);
    test_v(size, timer2);
    test_iv(size, timer4);

    return 0;
}
