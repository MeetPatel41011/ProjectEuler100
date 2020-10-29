/*

 Even Fibonacci numbers

 # Problem
 Each new term in the Fibonacci sequence is generated by adding the previous two terms.
 By starting with 1 and 2, the first 10 terms will be:
 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 By considering the terms in the Fibonacci sequence whose values do not exceed four million,
 find the sum of the even-valued terms.

*/

#include<stdio.h>

int main(){
    int lastNum = 1, currentNum = 2, total = 0, limit, temp;
    scanf("%d", &limit);
    for (;currentNum <= limit;){  //iterating values from 2 to limit entered by user
        if (currentNum%2 == 0)	//Checking whether even or not
            total += currentNum;	//Incrementing total value if its even

        temp = currentNum;  //Storing current Fibonacci number before updating it because it is needed below for lastNumber in the next iteration
        currentNum += lastNum;  //Updating current number for next iteration
        lastNum = temp;
        
    }
    printf("%d", total);
}