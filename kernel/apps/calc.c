#include "calc.h"

// initialize the math storage variables
int mathOp[CALCSIZE];
double strNum[CALCSIZE];
int strNumCount = 0, tempNum = -1;
bool isNegative = false, isUnaryNot = false;

// concatinating for calculator
int concat(int x, int y)
{
    if(x < 0) {
        return y;
    }
    if(y < 0) {
        return x;
    }
    int pow = 10;
    while(y >= pow)
    {
        pow*= 10;
    }
    return x * pow + y;
}

bool isMathOperator(char charToCheck) {
    return charToCheck == '+' || charToCheck == '-' || charToCheck == '*' || charToCheck == '/' || charToCheck == '%' || charToCheck == '&' || charToCheck == '|' || charToCheck == '^' || charToCheck == '~' || charToCheck == '<' || charToCheck == '>' || charToCheck == '=' || charToCheck == '[' || charToCheck == ']';
}

void calcHelp()
{
    print("\nCalculator help: ", 0x0F);
    print("\n[HELP TEXT HERE]", 0x0F);
}

//Prints an error based on the error ID
void mathError(uint8 ID)
{
    newline();
    switch (ID)
    {
    case 0:
        print("Cannot start with an operator", 0x04);
        break;
    case 1:
        print("Cannot divide by 0", 0x04);
        break;
    case 2:
        print("Cannot have 2 operators side by side", 0x04);
        break;
    default:
        print("Unknown math exception: ", 0x04);
        printint(ID, 0x04);
        break;
    }
}

void calc(string args)
{
    if(strEql(args," -h"))
    {
       calcHelp();
    }
    else if(strEql(args," -pi"))
    {
        newline();
        print(PI_S, 0x08);
    }
    else if(strEql(args," -e"))
    {
        newline();
        print(E_S, 0x08);
    }
    else if(strEql(args," -pow"))
    {
        newline();
        print("Number>  ",0x08);
        readStr(calcInput, CALCSIZE);
        newline();
    	char ans = powerOfTen((int)calcInput);
    	printch(ans, 0x0F);
    }
    else
    {
        print("\nUse calc -h for help\n>  ", 0x0F);
        memset(calcInput, '\0', CALCSIZE);
        readStr(calcInput, CALCSIZE);
        strcat(calcInput, "+0"); // Unary related hack! do not delete
        
        for(int i = 0; i < CALCSIZE; i++)
        {
            if((calcInput[i] == 0) || (calcInput[i] == 10))
                break;
            else
            {
                int pInput = ntoi(calcInput[i]);
                if (pInput != -1)
                    tempNum = concat(tempNum, pInput);
                else {
                    // Properly check for math operator
                    if(isMathOperator(calcInput[i])) {
                        //check if user enter negative and not minus operator
                        if(tempNum < 0) //If tempNum doesn't have a value
                        {
                            if(calcInput[i] == '-')
                            {
                                if(isNegative || isUnaryNot)
                                {
                                    mathError(2);
                                    return;
                                }
                                isNegative = true;
                            }
                            else if(calcInput[i] == '~')
                            {
                                if(isNegative || isUnaryNot)
                                {
                                    mathError(2);
                                    return;
                                }
                                isUnaryNot = true;
                            }
                            else
                            {
                                mathError(strNumCount == 0 ? 0 : 2);
                                return;
                            }
                        }
                        else
                        {
                            if(isNegative)
                                tempNum *= -1;
                            else if (isUnaryNot)
                                tempNum = ~tempNum;
                            strNum[strNumCount] = tempNum;
                            mathOp[strNumCount++] = calcInput[i]; 	// set math operator
                            tempNum = -1;
                            isNegative = false;
                            isUnaryNot = false;
                        }
                    }
                }
            }
        }
        strNum[strNumCount++] = tempNum;
        // '<' '>' and '='
        for(int i = 0; i < strNumCount-1;i++) {
            if(mathOp[i] == '<')
            {
                strNum[i] = strNum[i] < strNum[i+1];
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == '>')
            {
                strNum[i] = strNum[i] > strNum[i+1];
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == '=')
            {
                strNum[i] = strNum[i] == strNum[i+1];
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
        }
        //'*' '/' and '%'
        for(int i = 0; i < strNumCount-1;i++) {
            if(mathOp[i] == '*')
            {
                strNum[i] *= strNum[i+1];
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == '/')
            {
                if(strNum[i+1] == 0)
                {
                    mathError(1);
                    return;
                }
                strNum[i] /= strNum[i+1];
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == '%')
            {
                if(strNum[i+1] == 0)
                {
                    mathError(1);
                    return;
                }
                strNum[i] = ((long) strNum[i]) % ((long) strNum[i+1]);
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
        }
        
        //Then do + and -
        for(int i = 0; i < strNumCount-1;i++) {
            if(mathOp[i] == '+')
            {
                strNum[i] += strNum[i+1];
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == '-')
            {
                strNum[i] -= strNum[i+1];
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
        }

        //Then do '[' and ']' (Bitshifts)
        for(int i = 0; i < strNumCount-1;i++) {
            if(mathOp[i] == '[') // Shift to right
            {
                strNum[i] = ((long) strNum[i]) << ((long) strNum[i+1]);
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == ']') // Shift to left
            {
                strNum[i] = ((long) strNum[i]) >> ((long) strNum[i+1]);
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
        }

        //Then do '&', '|', and '^'
        for(int i = 0; i < strNumCount-1;i++) {
            if(mathOp[i] == '&')
            {
                strNum[i] = ((long) strNum[i]) & ((long) strNum[i+1]);
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == '|')
            {
                strNum[i] = ((long) strNum[i]) | ((long) strNum[i+1]);
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
            else if(mathOp[i] == '^')
            {
                strNum[i] = ((long) strNum[i]) ^ ((long) strNum[i+1]);
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    strNum[j] = strNum[j+1];
                }
                strNumCount--;
                i--;
                for(int j = i+1; j < strNumCount-1; j++)
                {
                    mathOp[j] = mathOp[j+1];
                }
            }
        }
        newline();
        printint(round(strNum[0]), 0x0F);

        //Reset operational variable to its default state
        tempNum = -1;
        strNumCount = 0;
        isNegative = false;
        isUnaryNot = false;
    }
}
