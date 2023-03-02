#include "user.hpp"
#include "unordered_map"


class System {
	static unordered_map<string, User*> users;
public:
	static User* getUser(string userId) {
		return users[userId];
	}
	static void addUser(string userId, User* user) {
		users[userId] = user;
	}
};