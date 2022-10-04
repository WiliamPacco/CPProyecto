#include <stdio.h>
#include <conio.h>
#include <string>
#include <algorithm>
using namespace std;

//Primera Clase
struct Cesar {
	static string Cifrar(string t, int clave);
	static string Descifrar(string t, int clave);
};

inline string Cesar::Cifrar(string t, int clave) {
	transform(t.begin(), t.end(), t.begin(), toupper);

	string r = "";
	for (auto c : t) {
		if (isalpha(c)) {
			c += clave;
			if (c > 'Z') c -= 26;
			if (c < 'A') c += 26;
		}
		r += c;
	}
	return r;
}
inline string Cesar::Descifrar(string t, int clave) { return Cifrar(t, -clave); }
