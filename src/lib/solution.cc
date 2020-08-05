#include "solution.h"
#include <string>
#include <algorithm>

//Reverse EE599 to 995EE
string Solution::SimplePalindrome(string s1){

    //create string s2 the same to string s1
    string s2 (s1);

    int StringSize = s1.size();
    int i = 0; //left to right
    int j = StringSize - 1; //right to left

    for (i = 0; i < j; i++, j--)
    {
        swap(s1[i], s1[j]);
    }

    if (s1 == s2)
    {
        return "True";
    }else
    {
        return "False";
    }

}

//ApproximatePalindrome remove unnecessary things first 
string Solution::ApproximatePalindrome(string s3){

    s3.erase (remove(s3.begin(), s3.end(), ' '), s3.end()); //remove spaces
    s3.erase (remove_if (s3.begin (), s3.end (), ispunct), s3.end ()); //remove punct
    transform(s3.begin(), s3.end(), s3.begin(), ::tolower); //transform to lowercase
    
    //same to SimplePalindrome
    string s4 (s3);
    int StringSize = s3.size();
    int i = 0;
    int j = StringSize - 1;

    for (i = 0; i < j; i++, j--)
    {
        swap(s3[i], s3[j]);
    }

    if (s3 == s4)
    {
        return "True";
    }else
    {
        return "False";
    }

    return s3;

}







