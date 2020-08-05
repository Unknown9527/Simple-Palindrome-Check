#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    //SimplePalidrome
    cout << solution.SimplePalindrome("18281") << endl;

    //ApproximatePalindrome
    cout << solution.ApproximatePalindrome("Was it a car or a cat I saw?") << endl;
    
    return 0;
}