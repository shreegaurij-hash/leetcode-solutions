class Solution {
//Using two pointers from both ends to swap vowels while skipping consonants.
public:
    bool isvowel(char c)
    {
        c=tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';

    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right)
        {
            while(left<right && !isvowel(s[left]))
            left++;
            while(left<right && !isvowel(s[right]))
            right--;
            swap(s[left],s[right]);

            left++;
            right--;

        }
        return s;
        
    }
};
