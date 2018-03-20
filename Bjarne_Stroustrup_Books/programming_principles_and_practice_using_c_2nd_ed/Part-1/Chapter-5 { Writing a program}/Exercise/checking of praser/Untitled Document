#include"std_lib_facilities.h"
using namespace std;

vector<string>nouns;
vector<string>verbs;
vector<string>conjunctions;


void intialize()
{
 nouns.push_back("birds");
nouns.push_back("fish");
nouns.push_back("C++");

verbs.push_back("rules");
verbs.push_back("fly");
verbs.push_back("swim");


conjunctions.push_back("and");
conjunctions.push_back("or");
conjunctions.push_back("but");

}

bool is_noun(string w)
{
		for(int i = 0; i<nouns.size(); ++i)
			if (w==nouns[i]) return true;
		return false;
}

bool is_verb(string w)
{
		for(int i = 0; i<verbs.size(); ++i)
			if (w==verbs[i]) return true;
		return false;
}

bool is_conjunction(string w)
{
		for(int i = 0; i<conjunctions.size(); ++i)
			if (w==conjunctions[i]) return true;
		return false;
}

bool sentence()
{
	string w;
	cin >> w;
	if (!is_noun(w)) return false;

	string w2;
	cin >> w2;
	if (!is_verb(w2)) return false;

	string w3;
	cin >> w3;
	if (w3 == ".") return true;	// end of sentence
	if (!is_conjunction(w3)) return false;	// not end of sentence and not conjunction
		// look for another sentence
}


int main()
{
 cout<<"Enter the statment \n";
 intialize();
 while(cin)
{


			bool b = sentence();
			if (b)
				cout << "OK\n";
			else
				cout << "not OK\n";
			cout << "Try again: ";


}


}
