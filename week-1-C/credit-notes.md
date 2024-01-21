American express num start with 34 or 37 --> 15 digit nums
Mastercard nums 51, 52, 53, 54 or 55 ---> 16 digit nums
Visa nums 4 --> 13 or 16 digit nums

4003600000000014

1st case: 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 7
2nd case: 1*2 + 0 + 0 + 0 + 0 + 6*2 + 0 + 4*2 = 2 + 12 + 8  // for 2 digit nums , add them together
                                                =2 + 1+2 + 8 = 13
Final Sum = 1st case + 2nd case = 20

20%10 = 0 --> means cc is valid

4003600000000014 % 10 = 4
4003600000000014 /100 = 1

1st case:
1. Iterate through cc num
2. Use % to get the last digit
3. Add last digit to sum
4. Divide cc num by 100 to get to every other digit
5. Repeat

2nd case:
1. Divide cc num by 10 to get to the second last digit
2. Iterate through cc num
3. Use % to get the last digit (second last digit becomes last now)
4. Add last digit *2 to SUM
    4.1 Use % to get the last digit
    4.2 Use / to get the 1st digit
    4.3 add them to SUM
5. Divide cc num by 100 to get to every other digit
6. Repeat


