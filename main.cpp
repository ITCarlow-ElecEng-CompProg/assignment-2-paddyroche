/**<
Patrick Roche
Exercise 2
Factorial Calculator */

#include <iostream>

using namespace std;

/**< Main Function */
int main()
{
    /**< Variable Declerations */
    int n;
    int fact = 1;

    /**< read in number for integer n */
    cout << "enter number for n" << endl;
    cin >> n;

    /**< Warning message must appear when n<0 */
    while (n<0)
    {
        /**< Enter number for n>=0 */
        cout << "enter number for n>0" << endl;
        cin >> n;
    }

    /**< Counting integer */
    int i;

    /**< i=n is starting point of the loop, i=0 is end point, i-- is saying that each part of the loop at the end of each
    step "i" is reduced by 1*/
    for(i=n;i>0;i--)
    {
        /**< /**< Because its factorial, we want to multiply it by (i)*(i-1)*(i-2) etc and stop before 0 */
        fact = fact*i;
    }

    /**< Factorial is presented */
    cout << "Factorial is: " << fact;

    return 0;
}
