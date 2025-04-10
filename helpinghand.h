#pragma once
//ARMSTRONG
int arms(int s) {
    int n, on, r, r1 = 0;
    n=s; // Assign the input number to n
    on = n; // Store the original number to check later
    // Find the number of digits in the number

    while (on != 0) {
       // remainder contains the last digit
        r = on % 10;
       r1 += r * r * r;
        
       // removing last digit from the orignal number
       on /= 10;
    }
    // if orignal number and result are equal
    if (r1 == n) {
        return n; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

// PALINDROME
int palin(int p){
	int rem,temp,rev=0;
	temp=p;
	while (temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp/=10;
	}
	return(rev==p);
	
}
// //FACTORIAL
int fact(int f) {
    int n, i;
    unsigned long long fact = 1;
    n=f; // Assign the input number to n

    // shows error if the user enters a negative integer
    if (n < 0)
    {
        return -1; // Error case
        
    }
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
       
    }

    return fact;
}

//LEAP YEAR 
int leap(int l) {
    if ((l % 4 == 0 && l % 100 != 0) || (l % 400 == 0)) {
        return 1;
    }
    return 0;
}
