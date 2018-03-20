#include "std_lib_facilities.h"

using namespace std;

class Token
{
  public:
	char kind;
	int value;
	Token(char ch)
              :kind(ch),value(0){ }
	Token(char ch,int val)
		:kind(ch),value(val){ }
};

//-----------------------------------------------------------------------------------

class Token_stream
{
public:
	Token_stream(); //make a Token_stream that readsa from cin
	Token get();    // get a Token {get () to else where}
	void putback(Token t);
private:
	bool full;
	Token buffer;

};

//The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
:full(false),buffer(0)            // no token is in buffer
{
}

//-----------------------------------------------------------------------------------

void Token_stream::putback(Token t)
{
	if(full)error("putback() into a fulll buffer");	
	buffer=t;  //copy t to buffer
	full=true; //buffer is full

}

//-----------------------------------------------------------------------------------

Token Token_stream::get()
{
if(full)
{
full=false;
return buffer;

}

	char ch;
	cin>>ch;
	 switch (ch) {
   case '=':    // for "print"
    case 'x':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/': case '{': case'}':   case '!':
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        {    
            cin.putback(ch);         // put digit back into the input stream
           int val;
            cin >> val;              // read a floating-point number
            return Token('8',val);   // let '8' represent "a number"
        }
    default:
        error("Bad token");
    }
  
}

//-----------------------------------------------------------------------------------
Token_stream ts; //token stream created

//-----------------------------------------------------------------------------------
int expression(); //read and evaluate a expression
//-----------------------------------------------------------------------------------
int term(); //read and evaluate a term

//-----------------------------------------------------------------------------------

int fact(int n) //factorial function to calculate factorial
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}

//--------------------------------------------------------------------------------
int primary()     // read and evaluate a Primary
{
    Token t = ts.get();
    switch (t.kind) {
    case '{':    // handle '(' expression ')'
        {    
          int  d = expression();
            t = ts.get();
            if (t.kind != '}') error("'}' expected");
            return d;
        }
	 case '(':    // handle '(' expression ')'
        {    
            int d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case '8':            // we use '8' to represent a number
        return t.value;  // return the number's value
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

int expression()
{
    int left = term();      // read and evaluate a Term
    Token t = ts.get();     // get the next token
    while(true) {    
        switch(t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = ts.get();
            break;
 	case '*':
            left *= term();
            t = ts.get();
            break;
        case '/':
            {    
               int d = term();
                if (d == 0) error("divide by zero");
                left /= d; 
                t = ts.get();
                break;
            }
		case '!':
	{
	        int d=term();
                fact(d);
                left=d;  
		t=ts.get();
		break;                    
	}
        default:
             ts.putback(t); //put t back into the token stream
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

int term()
{
    int left = primary();
    Token t = ts.get();     // get the next token

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
            {    
                int d = primary();
                if (d == 0) error("divide by zero");
                left /= d; 
                t = ts.get();
                break;
            }
	case '!':
		{
		int d=term();
                fact(d);
                left=d;
		t=ts.get();
break;                    
		}
        default: 
             ts.putback(t); // put t back into the token stream
            return left;
        }
    }
}
//-----------------------------------------------------------------------------------
int main()
try
{
	int val=0;
	cout<<"Welcome to our Factorial calculator\n"<<"Please enter expressions\n";
	    while (cin) {
	        Token t = ts.get();
		
                 cout<<"Please press x character to quit or = character to print result\n";	       
	        if (t.kind == 'x') break; // 'q' for quit
	        if (t.kind == '=')        // ';' for "print now"
	            cout << "=" << val << '\n';
	        else
	            ts.putback(t);
	        val = expression();
	    }
	keep_window_open();
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n'; 
	keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n"; 
	keep_window_open();
    return 2;
}

//------------------------------------------------------------------------------

