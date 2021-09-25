/*

@uthor: Shivam Dixit
Exercise7: Print the value of y for given x=2 & z=4 and analyze the output.
            a. y = x++ + ++x;               b. y = ++x + ++x; 
            c. y = ++x + ++x + ++x;         d. y = x>z;
            e. y = x>z? x:z;                f. y = x&z; 
            g. y = x>>2 + z<<1; 

*/

#include <stdio.h>

int main() {

    // Declare and initialize variables !!
    int y, x = 2, z = 4;

    /*
    **** Arithmetic operators in C:

    	Operator	Type	      Example
        ----------------------------------
            +	  Addition	       7+3=10
            −	  Subtraction	   7−3=4
            *	  Multiplication   7*3=21
            /	  Division	       9/3=3
            %	  Modulus	       10%3=1
            ++	  Increment	       x++ or ++x
            −−	  Decrement	       x−− or --x
            −	  Unary negation   −10


    **** "x++" called post increment (increses the value of x by 1 " *at the end of the execution of current line " i.e. x = x + 1 or x += 1).
    **** "++x" called pre increment (increses the value of x by 1 " *before the execution of current line " i.e. x = x + 1 or x += 1).

    **** Similer to (++x and x++): "x--" called post decrement and "--x" called pre decrement (x = x - 1 or x -= 1).


    **** Assignment operators:

        Operator    Example	   What_it_means
       --------------------------------------
            +=	     a+=b	    a=a+b
            −=	     a−=b	    a=a−b
            *=	     a*=b	    a=a*b
            /=	     a/=b	    a=a/b

    */

    // a) Compute y = x++ + ++x and print the value of y !!
    y = x++ + ++x;
    printf("\nValue of y (y = x++ + ++x) is: %d", y);

    // b) Compute y= ++x + ++x and print the value of y !!
    y = ++x + ++x; 
    printf("\nValue of y (y = ++x + ++x) is: %d", y);

    // c) Compute y = ++x + ++x + ++x and print the value of y !!
    y = ++x + ++x + ++x; 
    printf("\nValue of y (y = ++x + ++x + ++x) is: %d", y);

    /*

    **** Comparison operators:

    	 Operator	   What it means	           Example
        ---------------------------------------------------
            ==	        Equal to	                 a==b
            !=	        Not equal to	             a!=b
            >       	Greater than	             a>b
            >=      	Greater than or equal to	 a>=b
            <	        Less than	                 a<b
            <=      	Less than or equal to	     a<=b


    */

    // d) Compute y = x>z and print the value of y !!
    y = x > z;
    printf("\nValue of y (y = x > z) is: %d", y);

    /*
    **** Ternary Operator (?:): Similer to if-else statement.

    variable = Expression1 ? Expression2 : Expression3

    if(Expression1){
        variable = Expression2;
    }
    else{
        variable = Expression3;
    }




    */

    // e) Compute y = x>z ? x:z and print the value of y !!
    y = x > z ? x : z; 
    printf("\nValue of y (y = x > z ? x : z) is: %d", y);

    /*

    **** Bitwise operators:

    	Operator	What it means	Example
       -------------------------------------
            &	    Bitwise AND	     7&3
            |	    Bitwise OR	     7|3
            ^	    Bitwise NOT	     7^3
            <<	    Left shift	     7<<3
            >>	    Right shift    	 7>>3

    */

    // f) Compute y = x&z and print the value of y !!
    printf("\nX = %d, z = %d", x, z);
    y = x & z; 
    printf("\nValue of y (y = x & z) is: %d", y);

    /*

    **** Operator Precedence and Associativity in C.

        Operator                     Description	                            Associativity
    -----------------------------------------------------------------------------------------------
            ( )             Parentheses (function call)
            [ ]             Brackets (array subscript)
            .               Member selection via object name                        left-to-right
            ->              Member selection via pointer
            ++ —	    Postfix increment/decrement
    -----------------------------------------------------------------------------------------------
            ++ —            Prefix increment/decrement
            + –             Unary plus/minus
            ! ~             Logical negation/bitwise complement
            (type)          Cast (convert value to temporary value of type)         right-to-left
            *               Dereference
            &               Address (of operand)
            sizeof	    Determine size in bytes on this implementation
    -----------------------------------------------------------------------------------------------
            *  /  %	    Multiplication/division/modulus	                    left-to-right
    -----------------------------------------------------------------------------------------------
            +  –	    Addition/subtraction	                            left-to-right
    -----------------------------------------------------------------------------------------------
            <<  >>	    Bitwise shift left, Bitwise shift right	            left-to-right
    -----------------------------------------------------------------------------------------------
            <  <=           Relational less than/less than or equal to  
            >  >=	    Relational greater than/greater  than or equal to       left-to-right
    -----------------------------------------------------------------------------------------------
            ==  !=	    Relational is equal to/is not equal to	            left-to-right
    -----------------------------------------------------------------------------------------------
            &	            Bitwise AND	                                            left-to-right
    -----------------------------------------------------------------------------------------------
            ^	            Bitwise exclusive OR	                            left-to-right
    -----------------------------------------------------------------------------------------------
            |	            Bitwise inclusive OR	                            left-to-right
    -----------------------------------------------------------------------------------------------
            &&	            Logical AND	                                            left-to-right
    -----------------------------------------------------------------------------------------------
            | |	            Logical OR	                                            left-to-right
    -----------------------------------------------------------------------------------------------
            ? :	            Ternary conditional	                                    right-to-left
    -----------------------------------------------------------------------------------------------
            =               Assignment
            +=  -=          Addition/subtraction assignment
            *=  /=          Multiplication/division assignment
            %=  &=          Modulus/bitwise AND assignment                          right-to-left
            ^=  |=          Bitwise exclusive/inclusive OR assignment
            <<=  >>=	    Bitwise shift left/right assignment
    -----------------------------------------------------------------------------------------------
            ,               Comma (separate expressions)	                    left-to-right
    -----------------------------------------------------------------------------------------------

    */

    // g) Compute y = x>>2 + z<<1 and print the value of y !!
    y = x>>2 + z<<1; 
    printf("\nValue of y (y = x>>2 + z<<1) is: %d\n\n", y);

    y = (x>>2) + (z<<1); 
    printf("\nValue of y (y = (x>>2) + (z<<1)) is: %d\n\n", y);

    return 0;
}
