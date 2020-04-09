class Solution {
public:
	bool backspaceCompare(string s1, string s2) {
		string s1Final, s2Final;
		int s1Counter = 0, s2Counter = 0;
		//Removing # from s1 and saving the remaining string to s1Final
		for (int i = 0; i < s1.length(); i++) {
			if (i == 0 && s1[i] == '#')
				continue;

			if (s1[i] == '#') {
				int loopBack = 0;

				if (s1[i - 1] == '#' && i >= 2) {
					loopBack = 1;
					for (int j = i - 2; j >= 0; j--) {
						if (s1[j] == '#')
							continue;
						if (s1[j] != '#') {
							s1[j] = '#';
							break;
						}

					}
				}
				if (loopBack == 0) {
					s1[i - 1] = '#';
				}

			}
		}

		//cout << "S1 = " << s1;
		s1Final[s1Counter] = 'S';
		//s1Final.append("S");
		//s1Final.append("S");

		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] == '#')
				continue;

			s1Final.push_back(s1[i]);

		}
		cout << "s1Final = " << s1Final << endl;

		//Removing # from s2 and saving the remaining string to s2Final
		for (int i = 0; i < s2.length(); i++) {
			if (i == 0 && s2[i] == '#')
				continue;

			if (s2[i] == '#') {
				int loopBack = 0;

				if (s2[i - 1] == '#' && i >= 2) {
					loopBack = 1;
					for (int j = i - 2; j >= 0; j--) {
						if (s2[j] == '#')
							continue;
						if (s2[j] != '#') {
							s2[j] = '#';
							break;
						}

					}
				}
				if (loopBack == 0) {
					s2[i - 1] = '#';
				}

			}
		}

		//cout << "S2 = " << s2;

		for (int i = 0; i < s2.length(); i++) {
			if (s2[i] == '#')
				continue;

			s2Final.push_back(s2[i]);

		}
		cout << "s2Final = " << s2Final << endl;
		if (s1Final == s2Final)
			return true;

		return false;
	}
};