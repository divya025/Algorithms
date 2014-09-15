3//Div2 500

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

class Mailbox
{
public:
	int impossible(string collection, vector<string> address) {
		int charCount[256];
		for(char ch : collection) {
			charCount[ch]++;
		}
		int ans = 0;
		bool flag = true;
		for(int i=0 ; i<address.size() ; i++) {
			string curr = address[i];
			flag = true;
			for(char ch : address) {
				if(ch != " ") {
					if(charCount)
				}
			}

			//check flag
		}

	}
	
};

//Div2 500
class PalindromeDecoding
{
public:
	string decode(string code, vector<int> position, vector<int> length) {
		string ans = code;
		for(int i=0 ; i<position.size() ; i++) {
			string res = ans.substr(0, position[i] + length[i]);
			for(int j=length[i] ; j>= j ; j--) {
				res += ans.at(position[i] + j);
			}
			ans = res+ans.substr(position[i] + length[i]);
		}
		return ans;
	}
	
};

class ClientsList
{
public:
	vector<string> dataCleanup(vector<string> names){
		vector < pair<string,string> >name;
		for(int i=0 ; i<names.size()  ; i++) {
			char a[50] , b[50];
			sscanf(names[i].c_str() , "%s %s" , a, b);
			if(a[strlen(a) - 1] == ',') {
				a[strlen(a) - 1] = 0;
				name.push_back(make_pair(a, b));
			} else {
				name.push_back(make_pair(b, a));
			}
		}
		sort(name.begin(), name.end());
		vector<string> res;
		for(int i=0 ; i<names.size() ; i++) {
			res.push_back(name[i].second + " " + name[i].first);
		}
		return res;
	}
	
};

class WordForm
{
public:
	string getSequence(string word) {
		string ans = "";
		int pre = 0;
		for(int i=0 ; i<word.size() ; i++) {
			char c = tolower(word[i]);
			int kind = -1;
			if(c =='a' || c =='e' || c =='i' || c =='o' || c =='u' || (c == 'y' && i>0 && pre =-1)) {
				kind = 1;
			}
			if(pre != kind) {
				pre = kind;
				ans += kind ==1 ? 'V' : 'C';
			}
		}
		return ans;

	}
	
};


class Decipher
{
public:
	vector<string> decipher(vector<string> encoded, string frequencyOrder) {

		vector<int> v(26);
		for(int i=0 ; i<encoded.size() ; i++) {
			for(int j=0 ; j<encoded[i].size() ; j++) {
				char c = encoded[i][j];
				v[c-'A']++;
			}
		}

		vector <pair<int , char> > V;
		for(int i=0 ; i<26 ; i++) {
			if(v[i]) {
				V.push_back(make_pair(-v[i] , 'A' + i));
			}
		}

		sort(V.begin(), V.end());
		map <char, char> M;
		for(int i=0 ; i<V.size() ; i++) {
			M[V[i].second] = frequencyOrder[i];
		}

		for(int i=0 ; i<encoded.size() ; i++) {
			for(int j=0 ; j<encoded[i].size() ; j++) {
				char &c = encoded[i][j];
				c = M[c];
			}
		}
		return encoded;
	}
};


class Aaagmnrs {
public:
	vector<string> anagrams(vector<string> phrases) {
		int n = phrases.size();
		vector<string> ret;
		set<string> dict;
		for(int i=0 ; i<n ; i++) {
			string tmp;
			for(int j=0 ; j<phrases[i].size() ; j++) {
				if (phrases[i][j] != ' ')
				{
					tmp += tolower(phrases[i][j]);
				}
			}
			sort(tmp.begin(), tmp.end());
			if(dict.count(tmp)) {
				continue;
			}
			dict.insert(tmp);
			ret.push_back(phrases[i]);
		}
		return ret;
	}
};





//Do more 500 pointers...starting from Div2 Success 70%

class XBallGame
{
public:
	vector<string> newStatistics(vector<string> placeboard) {
		string name[51] , pos[51];
		vector<string> result;

		int n = placeboard.size();

		for(int i=0 ; i<n ; i++) {
			string tmp = placeboard[i];
			name[i] = tmp.substr(0, tmp.size()-3);
			pos[i] = tmp.substr(tmp.size()-2);
		}

		for(int i=0 ; i<n ; i++) {
			string add, now;
			vector<string> all;
			now = pos[i];
			
			for(int j=0 ; j<n ; j++) {
				if(i!=j && name[i]==name[j]) {
					all.push_back(pos[j]);
				}
			}

			sort(all.begin(), all.end());
			add = name[i] + "-" + now;
			for(int k=0; k<all.size() ; k++) {
				add += "," + all[k];
			}

			result.push_back(add);
		}

		return result;
	}
	
};


class Abacus
{
public:
	vector <string> add(vector <string> original, int val) {
		int number = 0;
		for(int i=0 ; i<original.size() ; i++) {
			int digit = 9 - original[i].find("-");
			number  = 10*number + digit;
		}

		number += val;
		vector<int> digits;

		for(int i=0 ; i<original.size() ; i++) {
			digits.push_back(number%10);
			number /= 10;
		}

		reverse(digits.begin(), digits.end());
		vector<string> res(6);
		for(int i= 0 ;i<original.size() ; i++) {
			res[i] += string(9-digits[i] , "o");
			res[i] += string(3 , "-");
			res[i] += string(digits[i] , "o");
		}

		return res;
	}
	
};

//Do more 500pts for Div2. Getting harder here.



































