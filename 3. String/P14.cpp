/*Seven different symbols represent Roman numerals with the following values:

Symbol	Value
I	1
V	5
X	10
L	50
C	100
D	500
M	1000
Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:

If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.
If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol, for example, 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM).
Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (V), 50 (L), or 500 (D) multiple times. If you need to append a symbol 4 times use the subtractive form.
Given an integer, convert it to a Roman numeral.*/

#include<iostream>
using namespace std;

string roman(int n){
  switch (n) {
    case 1: return "I";
    case 2: return "II";
    case 3: return "III";
    case 4: return "IV";
    case 5: return "V";
    case 6: return "VI";
    case 7: return "VII";
    case 8: return "VIII";
    case 9: return "IX";
    case 10: return "X";
    case 20: return "XX";
    case 30: return "XXX";
    case 40: return "XL";
    case 50: return "L";
    case 60: return "LX";
    case 70: return "LXX";
    case 80: return "LXXX";
    case 90: return "XC";
    case 100: return "C";
    case 200: return "CC";
    case 300: return "CCC";
    case 400: return "CD";
    case 500: return "D";
    case 600: return "DC";
    case 700: return "DCC";
    case 800: return "DCCC";
    case 900: return "CM";
    case 1000: return "M";
    case 2000: return "MM";
    case 3000: return "MMM";
  }
  return "";
}

string intToRoman(int num){
  string ans;
  int arr[]={1000,100,10,1};
  for(int i=0;i<4;i++){
    int rem=(num/arr[i])*arr[i];
    if(rem!=0){
      ans+=roman(rem);
    }
    num%=arr[i];
  }
  return ans;
}

int main(){
  int num;
  cout<<"Enter an integer value range from 1 to 3999:\n";
  cin>>num;

  string result=intToRoman(num);

  cout<<"Roman form of "<<num<<" is "<<result<<endl;
}