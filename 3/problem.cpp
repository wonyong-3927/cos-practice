#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int sum;
    int first, second;
    if (argc != 3)
    {
        printf("Invalid number of arguments\n");
        return 1;
    }

    first = atoi(argv[1]);
    second = atoi(argv[2]);

    if (first < second)
    {
        sum = 0;
        while (first <= second)
        {
            sum += first; 
            first++;
        }
        printf("Sum: %d\n", sum);
    }
    else
    {
        printf("Invalid argument, A needs to be smaller than B");
    }
   
}


 // int A , B;
    // cout << "enter number A: " << endl;
    // cin >> A;
    // cout << "enter number B: " << endl;
    // cin >> B;

    // if (A<B){
    //     cout << (A+B)*(B-A+1)*1/2 << endl;
    // }else{
    //     cout << "A is smaller than B, closing program"<< endl;
    //     return 0;
    // }



    // return 0;