#include "Calculator.h"
#include "context.h"
#include "Parser.h"
#include "Factory.h"
#include "StreamReader.h"
#include <vector>
#include <string>


using namespace std;

Calculator::Calculator()
{
}

void Calculator::calculate(istream &input){
	StreamReader reader(input);
	Parser parser;
	Factory& factory = Factory::Instance();
	while (reader.has_next_line()){
		try {
			string cur_line = reader.next_line();
			vector<string> params = parser.get_params(cur_line);
			if (params.size() == 0) {
				continue;
			}
			Operation *operation = factory.get_operation_by_name(params[0]);
			params.erase(params.begin());	
			operation->evaluate(params, context);
		}
		catch (WrongNumberOfArgumentsException &e) {
			cout << e.what() << endl;
		}
		catch (MathsOperationException &e) {
			cout << e.what() << endl;
		}
		catch (ContextExceptions &e) {
			cout << e.what() << endl;
		}
		catch (WrongCommandNameException &e) {
			cout << e.what() << endl;
		}
		catch (WrongValueException &e) {
			cout << e.what() << endl;
		}
	}
}


Calculator::~Calculator()
{
}
